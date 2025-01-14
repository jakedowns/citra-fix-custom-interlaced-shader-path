package org.citra.citra_emu.vendor.simongellis.leia.webxr

import android.content.Context
import android.graphics.SurfaceTexture
import android.util.AttributeSet
import android.util.Log
import com.leia.sdk.views.InputViewsAsset
import com.leia.sdk.views.InterlacedSurfaceView

class LeiaSurfaceView(context: Context, attrs: AttributeSet) : InterlacedSurfaceView(context, attrs) {
    private val textureRenderer = LeiaTextureRenderer()
    private val asset = InputViewsAsset(RendererImpl(textureRenderer))

    init {
        Log.i("LeiaSurfaceView", "init")
        setViewAsset(asset)
    }

    fun addTexture(texture: SurfaceTexture, transform: FloatArray) {
        textureRenderer.addTexture(texture, transform)
    }
}