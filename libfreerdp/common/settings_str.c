/* Generated by  */

#include <freerdp/settings.h>
#include <freerdp/log.h>

#include "../core/settings.h"

#define TAG FREERDP_TAG("common.settings")

struct settings_str_entry
{
	size_t id;
	size_t type;
	const char* str;
};
static const struct settings_str_entry settings_map[] = {
	{ FreeRDP_AllowCacheWaitingList, 0, "FreeRDP_AllowCacheWaitingList" },
	{ FreeRDP_AllowDesktopComposition, 0, "FreeRDP_AllowDesktopComposition" },
	{ FreeRDP_AllowFontSmoothing, 0, "FreeRDP_AllowFontSmoothing" },
	{ FreeRDP_AllowUnanouncedOrdersFromServer, 0, "FreeRDP_AllowUnanouncedOrdersFromServer" },
	{ FreeRDP_AltSecFrameMarkerSupport, 0, "FreeRDP_AltSecFrameMarkerSupport" },
	{ FreeRDP_AsyncChannels, 0, "FreeRDP_AsyncChannels" },
	{ FreeRDP_AsyncUpdate, 0, "FreeRDP_AsyncUpdate" },
	{ FreeRDP_AudioCapture, 0, "FreeRDP_AudioCapture" },
	{ FreeRDP_AudioPlayback, 0, "FreeRDP_AudioPlayback" },
	{ FreeRDP_Authentication, 0, "FreeRDP_Authentication" },
	{ FreeRDP_AuthenticationOnly, 0, "FreeRDP_AuthenticationOnly" },
	{ FreeRDP_AutoAcceptCertificate, 0, "FreeRDP_AutoAcceptCertificate" },
	{ FreeRDP_AutoDenyCertificate, 0, "FreeRDP_AutoDenyCertificate" },
	{ FreeRDP_AutoLogonEnabled, 0, "FreeRDP_AutoLogonEnabled" },
	{ FreeRDP_AutoReconnectionEnabled, 0, "FreeRDP_AutoReconnectionEnabled" },
	{ FreeRDP_BitmapCacheEnabled, 0, "FreeRDP_BitmapCacheEnabled" },
	{ FreeRDP_BitmapCachePersistEnabled, 0, "FreeRDP_BitmapCachePersistEnabled" },
	{ FreeRDP_BitmapCacheV3Enabled, 0, "FreeRDP_BitmapCacheV3Enabled" },
	{ FreeRDP_BitmapCompressionDisabled, 0, "FreeRDP_BitmapCompressionDisabled" },
	{ FreeRDP_CertificateCallbackPreferPEM, 0, "FreeRDP_CertificateCallbackPreferPEM" },
	{ FreeRDP_CertificateUseKnownHosts, 0, "FreeRDP_CertificateUseKnownHosts" },
	{ FreeRDP_ColorPointerFlag, 0, "FreeRDP_ColorPointerFlag" },
	{ FreeRDP_CompressionEnabled, 0, "FreeRDP_CompressionEnabled" },
	{ FreeRDP_ConsoleSession, 0, "FreeRDP_ConsoleSession" },
	{ FreeRDP_CredentialsFromStdin, 0, "FreeRDP_CredentialsFromStdin" },
	{ FreeRDP_DeactivateClientDecoding, 0, "FreeRDP_DeactivateClientDecoding" },
	{ FreeRDP_Decorations, 0, "FreeRDP_Decorations" },
	{ FreeRDP_DesktopResize, 0, "FreeRDP_DesktopResize" },
	{ FreeRDP_DeviceRedirection, 0, "FreeRDP_DeviceRedirection" },
	{ FreeRDP_DisableCredentialsDelegation, 0, "FreeRDP_DisableCredentialsDelegation" },
	{ FreeRDP_DisableCtrlAltDel, 0, "FreeRDP_DisableCtrlAltDel" },
	{ FreeRDP_DisableCursorBlinking, 0, "FreeRDP_DisableCursorBlinking" },
	{ FreeRDP_DisableCursorShadow, 0, "FreeRDP_DisableCursorShadow" },
	{ FreeRDP_DisableFullWindowDrag, 0, "FreeRDP_DisableFullWindowDrag" },
	{ FreeRDP_DisableMenuAnims, 0, "FreeRDP_DisableMenuAnims" },
	{ FreeRDP_DisableRemoteAppCapsCheck, 0, "FreeRDP_DisableRemoteAppCapsCheck" },
	{ FreeRDP_DisableThemes, 0, "FreeRDP_DisableThemes" },
	{ FreeRDP_DisableWallpaper, 0, "FreeRDP_DisableWallpaper" },
	{ FreeRDP_DrawAllowColorSubsampling, 0, "FreeRDP_DrawAllowColorSubsampling" },
	{ FreeRDP_DrawAllowDynamicColorFidelity, 0, "FreeRDP_DrawAllowDynamicColorFidelity" },
	{ FreeRDP_DrawAllowSkipAlpha, 0, "FreeRDP_DrawAllowSkipAlpha" },
	{ FreeRDP_DrawGdiPlusCacheEnabled, 0, "FreeRDP_DrawGdiPlusCacheEnabled" },
	{ FreeRDP_DrawGdiPlusEnabled, 0, "FreeRDP_DrawGdiPlusEnabled" },
	{ FreeRDP_DrawNineGridEnabled, 0, "FreeRDP_DrawNineGridEnabled" },
	{ FreeRDP_DumpRemoteFx, 0, "FreeRDP_DumpRemoteFx" },
	{ FreeRDP_DynamicDaylightTimeDisabled, 0, "FreeRDP_DynamicDaylightTimeDisabled" },
	{ FreeRDP_DynamicResolutionUpdate, 0, "FreeRDP_DynamicResolutionUpdate" },
	{ FreeRDP_EmbeddedWindow, 0, "FreeRDP_EmbeddedWindow" },
	{ FreeRDP_EnableWindowsKey, 0, "FreeRDP_EnableWindowsKey" },
	{ FreeRDP_EncomspVirtualChannel, 0, "FreeRDP_EncomspVirtualChannel" },
	{ FreeRDP_ExtSecurity, 0, "FreeRDP_ExtSecurity" },
	{ FreeRDP_ExternalCertificateManagement, 0, "FreeRDP_ExternalCertificateManagement" },
	{ FreeRDP_FIPSMode, 0, "FreeRDP_FIPSMode" },
	{ FreeRDP_FastPathInput, 0, "FreeRDP_FastPathInput" },
	{ FreeRDP_FastPathOutput, 0, "FreeRDP_FastPathOutput" },
	{ FreeRDP_ForceEncryptedCsPdu, 0, "FreeRDP_ForceEncryptedCsPdu" },
	{ FreeRDP_ForceMultimon, 0, "FreeRDP_ForceMultimon" },
	{ FreeRDP_FrameMarkerCommandEnabled, 0, "FreeRDP_FrameMarkerCommandEnabled" },
	{ FreeRDP_Fullscreen, 0, "FreeRDP_Fullscreen" },
	{ FreeRDP_GatewayBypassLocal, 0, "FreeRDP_GatewayBypassLocal" },
	{ FreeRDP_GatewayEnabled, 0, "FreeRDP_GatewayEnabled" },
	{ FreeRDP_GatewayHttpTransport, 0, "FreeRDP_GatewayHttpTransport" },
	{ FreeRDP_GatewayHttpUseWebsockets, 0, "FreeRDP_GatewayHttpUseWebsockets" },
	{ FreeRDP_GatewayRpcTransport, 0, "FreeRDP_GatewayRpcTransport" },
	{ FreeRDP_GatewayUdpTransport, 0, "FreeRDP_GatewayUdpTransport" },
	{ FreeRDP_GatewayUseSameCredentials, 0, "FreeRDP_GatewayUseSameCredentials" },
	{ FreeRDP_GfxAVC444, 0, "FreeRDP_GfxAVC444" },
	{ FreeRDP_GfxAVC444v2, 0, "FreeRDP_GfxAVC444v2" },
	{ FreeRDP_GfxH264, 0, "FreeRDP_GfxH264" },
	{ FreeRDP_GfxPlanar, 0, "FreeRDP_GfxPlanar" },
	{ FreeRDP_GfxProgressive, 0, "FreeRDP_GfxProgressive" },
	{ FreeRDP_GfxProgressiveV2, 0, "FreeRDP_GfxProgressiveV2" },
	{ FreeRDP_GfxSendQoeAck, 0, "FreeRDP_GfxSendQoeAck" },
	{ FreeRDP_GfxSmallCache, 0, "FreeRDP_GfxSmallCache" },
	{ FreeRDP_GfxThinClient, 0, "FreeRDP_GfxThinClient" },
	{ FreeRDP_GrabKeyboard, 0, "FreeRDP_GrabKeyboard" },
	{ FreeRDP_GrabMouse, 0, "FreeRDP_GrabMouse" },
	{ FreeRDP_HasExtendedMouseEvent, 0, "FreeRDP_HasExtendedMouseEvent" },
	{ FreeRDP_HasHorizontalWheel, 0, "FreeRDP_HasHorizontalWheel" },
	{ FreeRDP_HasMonitorAttributes, 0, "FreeRDP_HasMonitorAttributes" },
	{ FreeRDP_HiDefRemoteApp, 0, "FreeRDP_HiDefRemoteApp" },
	{ FreeRDP_IPv6Enabled, 0, "FreeRDP_IPv6Enabled" },
	{ FreeRDP_IgnoreCertificate, 0, "FreeRDP_IgnoreCertificate" },
	{ FreeRDP_JpegCodec, 0, "FreeRDP_JpegCodec" },
	{ FreeRDP_ListMonitors, 0, "FreeRDP_ListMonitors" },
	{ FreeRDP_LocalConnection, 0, "FreeRDP_LocalConnection" },
	{ FreeRDP_LogonErrors, 0, "FreeRDP_LogonErrors" },
	{ FreeRDP_LogonNotify, 0, "FreeRDP_LogonNotify" },
	{ FreeRDP_LongCredentialsSupported, 0, "FreeRDP_LongCredentialsSupported" },
	{ FreeRDP_LyncRdpMode, 0, "FreeRDP_LyncRdpMode" },
	{ FreeRDP_MaximizeShell, 0, "FreeRDP_MaximizeShell" },
	{ FreeRDP_MouseAttached, 0, "FreeRDP_MouseAttached" },
	{ FreeRDP_MouseHasWheel, 0, "FreeRDP_MouseHasWheel" },
	{ FreeRDP_MouseMotion, 0, "FreeRDP_MouseMotion" },
	{ FreeRDP_MouseUseRelativeMove, 0, "FreeRDP_MouseUseRelativeMove" },
	{ FreeRDP_MstscCookieMode, 0, "FreeRDP_MstscCookieMode" },
	{ FreeRDP_MultiTouchGestures, 0, "FreeRDP_MultiTouchGestures" },
	{ FreeRDP_MultiTouchInput, 0, "FreeRDP_MultiTouchInput" },
	{ FreeRDP_NSCodec, 0, "FreeRDP_NSCodec" },
	{ FreeRDP_NSCodecAllowDynamicColorFidelity, 0, "FreeRDP_NSCodecAllowDynamicColorFidelity" },
	{ FreeRDP_NSCodecAllowSubsampling, 0, "FreeRDP_NSCodecAllowSubsampling" },
	{ FreeRDP_NegotiateSecurityLayer, 0, "FreeRDP_NegotiateSecurityLayer" },
	{ FreeRDP_NetworkAutoDetect, 0, "FreeRDP_NetworkAutoDetect" },
	{ FreeRDP_NlaSecurity, 0, "FreeRDP_NlaSecurity" },
	{ FreeRDP_NoBitmapCompressionHeader, 0, "FreeRDP_NoBitmapCompressionHeader" },
	{ FreeRDP_OldLicenseBehaviour, 0, "FreeRDP_OldLicenseBehaviour" },
	{ FreeRDP_PasswordIsSmartcardPin, 0, "FreeRDP_PasswordIsSmartcardPin" },
	{ FreeRDP_PercentScreenUseHeight, 0, "FreeRDP_PercentScreenUseHeight" },
	{ FreeRDP_PercentScreenUseWidth, 0, "FreeRDP_PercentScreenUseWidth" },
	{ FreeRDP_PlayRemoteFx, 0, "FreeRDP_PlayRemoteFx" },
	{ FreeRDP_PreferIPv6OverIPv4, 0, "FreeRDP_PreferIPv6OverIPv4" },
	{ FreeRDP_PrintReconnectCookie, 0, "FreeRDP_PrintReconnectCookie" },
	{ FreeRDP_PromptForCredentials, 0, "FreeRDP_PromptForCredentials" },
	{ FreeRDP_RdpSecurity, 0, "FreeRDP_RdpSecurity" },
	{ FreeRDP_RedirectClipboard, 0, "FreeRDP_RedirectClipboard" },
	{ FreeRDP_RedirectDrives, 0, "FreeRDP_RedirectDrives" },
	{ FreeRDP_RedirectHomeDrive, 0, "FreeRDP_RedirectHomeDrive" },
	{ FreeRDP_RedirectParallelPorts, 0, "FreeRDP_RedirectParallelPorts" },
	{ FreeRDP_RedirectPrinters, 0, "FreeRDP_RedirectPrinters" },
	{ FreeRDP_RedirectSerialPorts, 0, "FreeRDP_RedirectSerialPorts" },
	{ FreeRDP_RedirectSmartCards, 0, "FreeRDP_RedirectSmartCards" },
	{ FreeRDP_RefreshRect, 0, "FreeRDP_RefreshRect" },
	{ FreeRDP_RemdeskVirtualChannel, 0, "FreeRDP_RemdeskVirtualChannel" },
	{ FreeRDP_RemoteAppLanguageBarSupported, 0, "FreeRDP_RemoteAppLanguageBarSupported" },
	{ FreeRDP_RemoteApplicationMode, 0, "FreeRDP_RemoteApplicationMode" },
	{ FreeRDP_RemoteAssistanceMode, 0, "FreeRDP_RemoteAssistanceMode" },
	{ FreeRDP_RemoteAssistanceRequestControl, 0, "FreeRDP_RemoteAssistanceRequestControl" },
	{ FreeRDP_RemoteConsoleAudio, 0, "FreeRDP_RemoteConsoleAudio" },
	{ FreeRDP_RemoteFxCodec, 0, "FreeRDP_RemoteFxCodec" },
	{ FreeRDP_RemoteFxImageCodec, 0, "FreeRDP_RemoteFxImageCodec" },
	{ FreeRDP_RemoteFxOnly, 0, "FreeRDP_RemoteFxOnly" },
	{ FreeRDP_RestrictedAdminModeRequired, 0, "FreeRDP_RestrictedAdminModeRequired" },
	{ FreeRDP_SaltedChecksum, 0, "FreeRDP_SaltedChecksum" },
	{ FreeRDP_SendPreconnectionPdu, 0, "FreeRDP_SendPreconnectionPdu" },
	{ FreeRDP_ServerMode, 0, "FreeRDP_ServerMode" },
	{ FreeRDP_SmartSizing, 0, "FreeRDP_SmartSizing" },
	{ FreeRDP_SmartcardEmulation, 0, "FreeRDP_SmartcardEmulation" },
	{ FreeRDP_SmartcardLogon, 0, "FreeRDP_SmartcardLogon" },
	{ FreeRDP_SoftwareGdi, 0, "FreeRDP_SoftwareGdi" },
	{ FreeRDP_SoundBeepsEnabled, 0, "FreeRDP_SoundBeepsEnabled" },
	{ FreeRDP_SpanMonitors, 0, "FreeRDP_SpanMonitors" },
	{ FreeRDP_SupportAsymetricKeys, 0, "FreeRDP_SupportAsymetricKeys" },
	{ FreeRDP_SupportDisplayControl, 0, "FreeRDP_SupportDisplayControl" },
	{ FreeRDP_SupportDynamicChannels, 0, "FreeRDP_SupportDynamicChannels" },
	{ FreeRDP_SupportDynamicTimeZone, 0, "FreeRDP_SupportDynamicTimeZone" },
	{ FreeRDP_SupportEchoChannel, 0, "FreeRDP_SupportEchoChannel" },
	{ FreeRDP_SupportErrorInfoPdu, 0, "FreeRDP_SupportErrorInfoPdu" },
	{ FreeRDP_SupportGeometryTracking, 0, "FreeRDP_SupportGeometryTracking" },
	{ FreeRDP_SupportGraphicsPipeline, 0, "FreeRDP_SupportGraphicsPipeline" },
	{ FreeRDP_SupportHeartbeatPdu, 0, "FreeRDP_SupportHeartbeatPdu" },
	{ FreeRDP_SupportMonitorLayoutPdu, 0, "FreeRDP_SupportMonitorLayoutPdu" },
	{ FreeRDP_SupportMultitransport, 0, "FreeRDP_SupportMultitransport" },
	{ FreeRDP_SupportSSHAgentChannel, 0, "FreeRDP_SupportSSHAgentChannel" },
	{ FreeRDP_SupportStatusInfoPdu, 0, "FreeRDP_SupportStatusInfoPdu" },
	{ FreeRDP_SupportVideoOptimized, 0, "FreeRDP_SupportVideoOptimized" },
	{ FreeRDP_SuppressOutput, 0, "FreeRDP_SuppressOutput" },
	{ FreeRDP_SurfaceCommandsEnabled, 0, "FreeRDP_SurfaceCommandsEnabled" },
	{ FreeRDP_SurfaceFrameMarkerEnabled, 0, "FreeRDP_SurfaceFrameMarkerEnabled" },
	{ FreeRDP_SuspendInput, 0, "FreeRDP_SuspendInput" },
	{ FreeRDP_TcpKeepAlive, 0, "FreeRDP_TcpKeepAlive" },
	{ FreeRDP_TlsSecurity, 0, "FreeRDP_TlsSecurity" },
	{ FreeRDP_ToggleFullscreen, 0, "FreeRDP_ToggleFullscreen" },
	{ FreeRDP_TransportDump, 0, "FreeRDP_TransportDump" },
	{ FreeRDP_TransportDumpReplay, 0, "FreeRDP_TransportDumpReplay" },
	{ FreeRDP_UnicodeInput, 0, "FreeRDP_UnicodeInput" },
	{ FreeRDP_UnmapButtons, 0, "FreeRDP_UnmapButtons" },
	{ FreeRDP_UseMultimon, 0, "FreeRDP_UseMultimon" },
	{ FreeRDP_UseRdpSecurityLayer, 0, "FreeRDP_UseRdpSecurityLayer" },
	{ FreeRDP_UsingSavedCredentials, 0, "FreeRDP_UsingSavedCredentials" },
	{ FreeRDP_VideoDisable, 0, "FreeRDP_VideoDisable" },
	{ FreeRDP_VmConnectMode, 0, "FreeRDP_VmConnectMode" },
	{ FreeRDP_WaitForOutputBufferFlush, 0, "FreeRDP_WaitForOutputBufferFlush" },
	{ FreeRDP_Workarea, 0, "FreeRDP_Workarea" },
	{ FreeRDP_DesktopOrientation, 1, "FreeRDP_DesktopOrientation" },
	{ FreeRDP_ProxyPort, 1, "FreeRDP_ProxyPort" },
	{ FreeRDP_AcceptedCertLength, 3, "FreeRDP_AcceptedCertLength" },
	{ FreeRDP_AuthenticationLevel, 3, "FreeRDP_AuthenticationLevel" },
	{ FreeRDP_AutoReconnectMaxRetries, 3, "FreeRDP_AutoReconnectMaxRetries" },
	{ FreeRDP_BitmapCacheV2NumCells, 3, "FreeRDP_BitmapCacheV2NumCells" },
	{ FreeRDP_BitmapCacheV3CodecId, 3, "FreeRDP_BitmapCacheV3CodecId" },
	{ FreeRDP_BitmapCacheVersion, 3, "FreeRDP_BitmapCacheVersion" },
	{ FreeRDP_BrushSupportLevel, 3, "FreeRDP_BrushSupportLevel" },
	{ FreeRDP_ChannelCount, 3, "FreeRDP_ChannelCount" },
	{ FreeRDP_ChannelDefArraySize, 3, "FreeRDP_ChannelDefArraySize" },
	{ FreeRDP_ClientBuild, 3, "FreeRDP_ClientBuild" },
	{ FreeRDP_ClientRandomLength, 3, "FreeRDP_ClientRandomLength" },
	{ FreeRDP_ClientSessionId, 3, "FreeRDP_ClientSessionId" },
	{ FreeRDP_ClusterInfoFlags, 3, "FreeRDP_ClusterInfoFlags" },
	{ FreeRDP_ColorDepth, 3, "FreeRDP_ColorDepth" },
	{ FreeRDP_CompDeskSupportLevel, 3, "FreeRDP_CompDeskSupportLevel" },
	{ FreeRDP_CompressionLevel, 3, "FreeRDP_CompressionLevel" },
	{ FreeRDP_ConnectionType, 3, "FreeRDP_ConnectionType" },
	{ FreeRDP_CookieMaxLength, 3, "FreeRDP_CookieMaxLength" },
	{ FreeRDP_DesktopHeight, 3, "FreeRDP_DesktopHeight" },
	{ FreeRDP_DesktopPhysicalHeight, 3, "FreeRDP_DesktopPhysicalHeight" },
	{ FreeRDP_DesktopPhysicalWidth, 3, "FreeRDP_DesktopPhysicalWidth" },
	{ FreeRDP_DesktopPosX, 3, "FreeRDP_DesktopPosX" },
	{ FreeRDP_DesktopPosY, 3, "FreeRDP_DesktopPosY" },
	{ FreeRDP_DesktopScaleFactor, 3, "FreeRDP_DesktopScaleFactor" },
	{ FreeRDP_DesktopWidth, 3, "FreeRDP_DesktopWidth" },
	{ FreeRDP_DeviceArraySize, 3, "FreeRDP_DeviceArraySize" },
	{ FreeRDP_DeviceCount, 3, "FreeRDP_DeviceCount" },
	{ FreeRDP_DeviceScaleFactor, 3, "FreeRDP_DeviceScaleFactor" },
	{ FreeRDP_DrawNineGridCacheEntries, 3, "FreeRDP_DrawNineGridCacheEntries" },
	{ FreeRDP_DrawNineGridCacheSize, 3, "FreeRDP_DrawNineGridCacheSize" },
	{ FreeRDP_DynamicChannelArraySize, 3, "FreeRDP_DynamicChannelArraySize" },
	{ FreeRDP_DynamicChannelCount, 3, "FreeRDP_DynamicChannelCount" },
	{ FreeRDP_EarlyCapabilityFlags, 3, "FreeRDP_EarlyCapabilityFlags" },
	{ FreeRDP_EncryptionLevel, 3, "FreeRDP_EncryptionLevel" },
	{ FreeRDP_EncryptionMethods, 3, "FreeRDP_EncryptionMethods" },
	{ FreeRDP_ExtEncryptionMethods, 3, "FreeRDP_ExtEncryptionMethods" },
	{ FreeRDP_Floatbar, 3, "FreeRDP_Floatbar" },
	{ FreeRDP_FrameAcknowledge, 3, "FreeRDP_FrameAcknowledge" },
	{ FreeRDP_GatewayAcceptedCertLength, 3, "FreeRDP_GatewayAcceptedCertLength" },
	{ FreeRDP_GatewayCredentialsSource, 3, "FreeRDP_GatewayCredentialsSource" },
	{ FreeRDP_GatewayPort, 3, "FreeRDP_GatewayPort" },
	{ FreeRDP_GatewayUsageMethod, 3, "FreeRDP_GatewayUsageMethod" },
	{ FreeRDP_GfxCapsFilter, 3, "FreeRDP_GfxCapsFilter" },
	{ FreeRDP_GlyphSupportLevel, 3, "FreeRDP_GlyphSupportLevel" },
	{ FreeRDP_JpegCodecId, 3, "FreeRDP_JpegCodecId" },
	{ FreeRDP_JpegQuality, 3, "FreeRDP_JpegQuality" },
	{ FreeRDP_KeySpec, 3, "FreeRDP_KeySpec" },
	{ FreeRDP_KeyboardCodePage, 3, "FreeRDP_KeyboardCodePage" },
	{ FreeRDP_KeyboardFunctionKey, 3, "FreeRDP_KeyboardFunctionKey" },
	{ FreeRDP_KeyboardHook, 3, "FreeRDP_KeyboardHook" },
	{ FreeRDP_KeyboardLayout, 3, "FreeRDP_KeyboardLayout" },
	{ FreeRDP_KeyboardSubType, 3, "FreeRDP_KeyboardSubType" },
	{ FreeRDP_KeyboardType, 3, "FreeRDP_KeyboardType" },
	{ FreeRDP_LargePointerFlag, 3, "FreeRDP_LargePointerFlag" },
	{ FreeRDP_LoadBalanceInfoLength, 3, "FreeRDP_LoadBalanceInfoLength" },
	{ FreeRDP_MaxTimeInCheckLoop, 3, "FreeRDP_MaxTimeInCheckLoop" },
	{ FreeRDP_MonitorAttributeFlags, 3, "FreeRDP_MonitorAttributeFlags" },
	{ FreeRDP_MonitorCount, 3, "FreeRDP_MonitorCount" },
	{ FreeRDP_MonitorDefArraySize, 3, "FreeRDP_MonitorDefArraySize" },
	{ FreeRDP_MonitorFlags, 3, "FreeRDP_MonitorFlags" },
	{ FreeRDP_MonitorLocalShiftX, 3, "FreeRDP_MonitorLocalShiftX" },
	{ FreeRDP_MonitorLocalShiftY, 3, "FreeRDP_MonitorLocalShiftY" },
	{ FreeRDP_MultifragMaxRequestSize, 3, "FreeRDP_MultifragMaxRequestSize" },
	{ FreeRDP_MultitransportFlags, 3, "FreeRDP_MultitransportFlags" },
	{ FreeRDP_NSCodecColorLossLevel, 3, "FreeRDP_NSCodecColorLossLevel" },
	{ FreeRDP_NSCodecId, 3, "FreeRDP_NSCodecId" },
	{ FreeRDP_NegotiationFlags, 3, "FreeRDP_NegotiationFlags" },
	{ FreeRDP_NumMonitorIds, 3, "FreeRDP_NumMonitorIds" },
	{ FreeRDP_OffscreenCacheEntries, 3, "FreeRDP_OffscreenCacheEntries" },
	{ FreeRDP_OffscreenCacheSize, 3, "FreeRDP_OffscreenCacheSize" },
	{ FreeRDP_OffscreenSupportLevel, 3, "FreeRDP_OffscreenSupportLevel" },
	{ FreeRDP_OsMajorType, 3, "FreeRDP_OsMajorType" },
	{ FreeRDP_OsMinorType, 3, "FreeRDP_OsMinorType" },
	{ FreeRDP_Password51Length, 3, "FreeRDP_Password51Length" },
	{ FreeRDP_PduSource, 3, "FreeRDP_PduSource" },
	{ FreeRDP_PercentScreen, 3, "FreeRDP_PercentScreen" },
	{ FreeRDP_PerformanceFlags, 3, "FreeRDP_PerformanceFlags" },
	{ FreeRDP_PointerCacheSize, 3, "FreeRDP_PointerCacheSize" },
	{ FreeRDP_PreconnectionId, 3, "FreeRDP_PreconnectionId" },
	{ FreeRDP_ProxyType, 3, "FreeRDP_ProxyType" },
	{ FreeRDP_RdpVersion, 3, "FreeRDP_RdpVersion" },
	{ FreeRDP_ReceivedCapabilitiesSize, 3, "FreeRDP_ReceivedCapabilitiesSize" },
	{ FreeRDP_RedirectedSessionId, 3, "FreeRDP_RedirectedSessionId" },
	{ FreeRDP_RedirectionAcceptedCertLength, 3, "FreeRDP_RedirectionAcceptedCertLength" },
	{ FreeRDP_RedirectionFlags, 3, "FreeRDP_RedirectionFlags" },
	{ FreeRDP_RedirectionPasswordLength, 3, "FreeRDP_RedirectionPasswordLength" },
	{ FreeRDP_RedirectionPreferType, 3, "FreeRDP_RedirectionPreferType" },
	{ FreeRDP_RedirectionTsvUrlLength, 3, "FreeRDP_RedirectionTsvUrlLength" },
	{ FreeRDP_RemoteAppNumIconCacheEntries, 3, "FreeRDP_RemoteAppNumIconCacheEntries" },
	{ FreeRDP_RemoteAppNumIconCaches, 3, "FreeRDP_RemoteAppNumIconCaches" },
	{ FreeRDP_RemoteApplicationExpandCmdLine, 3, "FreeRDP_RemoteApplicationExpandCmdLine" },
	{ FreeRDP_RemoteApplicationExpandWorkingDir, 3, "FreeRDP_RemoteApplicationExpandWorkingDir" },
	{ FreeRDP_RemoteApplicationSupportLevel, 3, "FreeRDP_RemoteApplicationSupportLevel" },
	{ FreeRDP_RemoteApplicationSupportMask, 3, "FreeRDP_RemoteApplicationSupportMask" },
	{ FreeRDP_RemoteFxCaptureFlags, 3, "FreeRDP_RemoteFxCaptureFlags" },
	{ FreeRDP_RemoteFxCodecId, 3, "FreeRDP_RemoteFxCodecId" },
	{ FreeRDP_RemoteFxCodecMode, 3, "FreeRDP_RemoteFxCodecMode" },
	{ FreeRDP_RemoteWndSupportLevel, 3, "FreeRDP_RemoteWndSupportLevel" },
	{ FreeRDP_RequestedProtocols, 3, "FreeRDP_RequestedProtocols" },
	{ FreeRDP_SelectedProtocol, 3, "FreeRDP_SelectedProtocol" },
	{ FreeRDP_ServerCertificateLength, 3, "FreeRDP_ServerCertificateLength" },
	{ FreeRDP_ServerPort, 3, "FreeRDP_ServerPort" },
	{ FreeRDP_ServerRandomLength, 3, "FreeRDP_ServerRandomLength" },
	{ FreeRDP_ShareId, 3, "FreeRDP_ShareId" },
	{ FreeRDP_SmartSizingHeight, 3, "FreeRDP_SmartSizingHeight" },
	{ FreeRDP_SmartSizingWidth, 3, "FreeRDP_SmartSizingWidth" },
	{ FreeRDP_StaticChannelArraySize, 3, "FreeRDP_StaticChannelArraySize" },
	{ FreeRDP_StaticChannelCount, 3, "FreeRDP_StaticChannelCount" },
	{ FreeRDP_TargetNetAddressCount, 3, "FreeRDP_TargetNetAddressCount" },
	{ FreeRDP_TcpAckTimeout, 3, "FreeRDP_TcpAckTimeout" },
	{ FreeRDP_TcpConnectTimeout, 3, "FreeRDP_TcpConnectTimeout" },
	{ FreeRDP_TcpKeepAliveDelay, 3, "FreeRDP_TcpKeepAliveDelay" },
	{ FreeRDP_TcpKeepAliveInterval, 3, "FreeRDP_TcpKeepAliveInterval" },
	{ FreeRDP_TcpKeepAliveRetries, 3, "FreeRDP_TcpKeepAliveRetries" },
	{ FreeRDP_ThreadingFlags, 3, "FreeRDP_ThreadingFlags" },
	{ FreeRDP_TlsSecLevel, 3, "FreeRDP_TlsSecLevel" },
	{ FreeRDP_VirtualChannelChunkSize, 3, "FreeRDP_VirtualChannelChunkSize" },
	{ FreeRDP_VirtualChannelCompressionFlags, 3, "FreeRDP_VirtualChannelCompressionFlags" },
	{ FreeRDP_XPan, 4, "FreeRDP_XPan" },
	{ FreeRDP_YPan, 4, "FreeRDP_YPan" },
	{ FreeRDP_ParentWindowId, 5, "FreeRDP_ParentWindowId" },
	{ FreeRDP_AcceptedCert, 7, "FreeRDP_AcceptedCert" },
	{ FreeRDP_ActionScript, 7, "FreeRDP_ActionScript" },
	{ FreeRDP_AllowedTlsCiphers, 7, "FreeRDP_AllowedTlsCiphers" },
	{ FreeRDP_AlternateShell, 7, "FreeRDP_AlternateShell" },
	{ FreeRDP_AssistanceFile, 7, "FreeRDP_AssistanceFile" },
	{ FreeRDP_AuthenticationServiceClass, 7, "FreeRDP_AuthenticationServiceClass" },
	{ FreeRDP_CardName, 7, "FreeRDP_CardName" },
	{ FreeRDP_CertificateAcceptedFingerprints, 7, "FreeRDP_CertificateAcceptedFingerprints" },
	{ FreeRDP_CertificateContent, 7, "FreeRDP_CertificateContent" },
	{ FreeRDP_CertificateFile, 7, "FreeRDP_CertificateFile" },
	{ FreeRDP_CertificateName, 7, "FreeRDP_CertificateName" },
	{ FreeRDP_ClientAddress, 7, "FreeRDP_ClientAddress" },
	{ FreeRDP_ClientDir, 7, "FreeRDP_ClientDir" },
	{ FreeRDP_ClientHostname, 7, "FreeRDP_ClientHostname" },
	{ FreeRDP_ClientProductId, 7, "FreeRDP_ClientProductId" },
	{ FreeRDP_ComputerName, 7, "FreeRDP_ComputerName" },
	{ FreeRDP_ConfigPath, 7, "FreeRDP_ConfigPath" },
	{ FreeRDP_ConnectionFile, 7, "FreeRDP_ConnectionFile" },
	{ FreeRDP_ContainerName, 7, "FreeRDP_ContainerName" },
	{ FreeRDP_CspName, 7, "FreeRDP_CspName" },
	{ FreeRDP_CurrentPath, 7, "FreeRDP_CurrentPath" },
	{ FreeRDP_Domain, 7, "FreeRDP_Domain" },
	{ FreeRDP_DrivesToRedirect, 7, "FreeRDP_DrivesToRedirect" },
	{ FreeRDP_DumpRemoteFxFile, 7, "FreeRDP_DumpRemoteFxFile" },
	{ FreeRDP_DynamicDSTTimeZoneKeyName, 7, "FreeRDP_DynamicDSTTimeZoneKeyName" },
	{ FreeRDP_GatewayAcceptedCert, 7, "FreeRDP_GatewayAcceptedCert" },
	{ FreeRDP_GatewayAccessToken, 7, "FreeRDP_GatewayAccessToken" },
	{ FreeRDP_GatewayDomain, 7, "FreeRDP_GatewayDomain" },
	{ FreeRDP_GatewayHostname, 7, "FreeRDP_GatewayHostname" },
	{ FreeRDP_GatewayPassword, 7, "FreeRDP_GatewayPassword" },
	{ FreeRDP_GatewayUsername, 7, "FreeRDP_GatewayUsername" },
	{ FreeRDP_HomePath, 7, "FreeRDP_HomePath" },
	{ FreeRDP_ImeFileName, 7, "FreeRDP_ImeFileName" },
	{ FreeRDP_KerberosArmor, 7, "FreeRDP_KerberosArmor" },
	{ FreeRDP_KerberosCache, 7, "FreeRDP_KerberosCache" },
	{ FreeRDP_KerberosKdc, 7, "FreeRDP_KerberosKdc" },
	{ FreeRDP_KerberosLifeTime, 7, "FreeRDP_KerberosLifeTime" },
	{ FreeRDP_KerberosRealm, 7, "FreeRDP_KerberosRealm" },
	{ FreeRDP_KerberosRenewableLifeTime, 7, "FreeRDP_KerberosRenewableLifeTime" },
	{ FreeRDP_KerberosStartTime, 7, "FreeRDP_KerberosStartTime" },
	{ FreeRDP_KeyboardRemappingList, 7, "FreeRDP_KeyboardRemappingList" },
	{ FreeRDP_NtlmSamFile, 7, "FreeRDP_NtlmSamFile" },
	{ FreeRDP_Password, 7, "FreeRDP_Password" },
	{ FreeRDP_PasswordHash, 7, "FreeRDP_PasswordHash" },
	{ FreeRDP_Pkcs11Module, 7, "FreeRDP_Pkcs11Module" },
	{ FreeRDP_PkinitAnchors, 7, "FreeRDP_PkinitAnchors" },
	{ FreeRDP_PlayRemoteFxFile, 7, "FreeRDP_PlayRemoteFxFile" },
	{ FreeRDP_PreconnectionBlob, 7, "FreeRDP_PreconnectionBlob" },
	{ FreeRDP_PrivateKeyContent, 7, "FreeRDP_PrivateKeyContent" },
	{ FreeRDP_PrivateKeyFile, 7, "FreeRDP_PrivateKeyFile" },
	{ FreeRDP_ProxyHostname, 7, "FreeRDP_ProxyHostname" },
	{ FreeRDP_ProxyPassword, 7, "FreeRDP_ProxyPassword" },
	{ FreeRDP_ProxyAuthorization, 7, "FreeRDP_ProxyAuthorization"},   
	{ FreeRDP_ProxyUsername, 7, "FreeRDP_ProxyUsername" },
	{ FreeRDP_RDP2TCPArgs, 7, "FreeRDP_RDP2TCPArgs" },
	{ FreeRDP_RdpKeyContent, 7, "FreeRDP_RdpKeyContent" },
	{ FreeRDP_RdpKeyFile, 7, "FreeRDP_RdpKeyFile" },
	{ FreeRDP_ReaderName, 7, "FreeRDP_ReaderName" },
	{ FreeRDP_RedirectionAcceptedCert, 7, "FreeRDP_RedirectionAcceptedCert" },
	{ FreeRDP_RedirectionDomain, 7, "FreeRDP_RedirectionDomain" },
	{ FreeRDP_RedirectionTargetFQDN, 7, "FreeRDP_RedirectionTargetFQDN" },
	{ FreeRDP_RedirectionTargetNetBiosName, 7, "FreeRDP_RedirectionTargetNetBiosName" },
	{ FreeRDP_RedirectionUsername, 7, "FreeRDP_RedirectionUsername" },
	{ FreeRDP_RemoteApplicationCmdLine, 7, "FreeRDP_RemoteApplicationCmdLine" },
	{ FreeRDP_RemoteApplicationFile, 7, "FreeRDP_RemoteApplicationFile" },
	{ FreeRDP_RemoteApplicationGuid, 7, "FreeRDP_RemoteApplicationGuid" },
	{ FreeRDP_RemoteApplicationIcon, 7, "FreeRDP_RemoteApplicationIcon" },
	{ FreeRDP_RemoteApplicationName, 7, "FreeRDP_RemoteApplicationName" },
	{ FreeRDP_RemoteApplicationProgram, 7, "FreeRDP_RemoteApplicationProgram" },
	{ FreeRDP_RemoteApplicationWorkingDir, 7, "FreeRDP_RemoteApplicationWorkingDir" },
	{ FreeRDP_RemoteAssistancePassStub, 7, "FreeRDP_RemoteAssistancePassStub" },
	{ FreeRDP_RemoteAssistancePassword, 7, "FreeRDP_RemoteAssistancePassword" },
	{ FreeRDP_RemoteAssistanceRCTicket, 7, "FreeRDP_RemoteAssistanceRCTicket" },
	{ FreeRDP_RemoteAssistanceSessionId, 7, "FreeRDP_RemoteAssistanceSessionId" },
	{ FreeRDP_ServerHostname, 7, "FreeRDP_ServerHostname" },
	{ FreeRDP_ShellWorkingDirectory, 7, "FreeRDP_ShellWorkingDirectory" },
	{ FreeRDP_SmartcardCertificate, 7, "FreeRDP_SmartcardCertificate" },
	{ FreeRDP_SmartcardPrivateKey, 7, "FreeRDP_SmartcardPrivateKey" },
	{ FreeRDP_TargetNetAddress, 7, "FreeRDP_TargetNetAddress" },
	{ FreeRDP_TransportDumpFile, 7, "FreeRDP_TransportDumpFile" },
	{ FreeRDP_Username, 7, "FreeRDP_Username" },
	{ FreeRDP_WindowTitle, 7, "FreeRDP_WindowTitle" },
	{ FreeRDP_WmClass, 7, "FreeRDP_WmClass" },
	{ FreeRDP_BitmapCacheV2CellInfo, 8, "FreeRDP_BitmapCacheV2CellInfo" },
	{ FreeRDP_ChannelDefArray, 8, "FreeRDP_ChannelDefArray" },
	{ FreeRDP_ClientAutoReconnectCookie, 8, "FreeRDP_ClientAutoReconnectCookie" },
	{ FreeRDP_ClientRandom, 8, "FreeRDP_ClientRandom" },
	{ FreeRDP_ClientTimeZone, 8, "FreeRDP_ClientTimeZone" },
	{ FreeRDP_DeviceArray, 8, "FreeRDP_DeviceArray" },
	{ FreeRDP_DynamicChannelArray, 8, "FreeRDP_DynamicChannelArray" },
	{ FreeRDP_FragCache, 8, "FreeRDP_FragCache" },
	{ FreeRDP_GlyphCache, 8, "FreeRDP_GlyphCache" },
	{ FreeRDP_LoadBalanceInfo, 8, "FreeRDP_LoadBalanceInfo" },
	{ FreeRDP_MonitorDefArray, 8, "FreeRDP_MonitorDefArray" },
	{ FreeRDP_MonitorIds, 8, "FreeRDP_MonitorIds" },
	{ FreeRDP_OrderSupport, 8, "FreeRDP_OrderSupport" },
	{ FreeRDP_Password51, 8, "FreeRDP_Password51" },
	{ FreeRDP_RdpServerCertificate, 8, "FreeRDP_RdpServerCertificate" },
	{ FreeRDP_RdpServerRsaKey, 8, "FreeRDP_RdpServerRsaKey" },
	{ FreeRDP_ReceivedCapabilities, 8, "FreeRDP_ReceivedCapabilities" },
	{ FreeRDP_RedirectionPassword, 8, "FreeRDP_RedirectionPassword" },
	{ FreeRDP_RedirectionTsvUrl, 8, "FreeRDP_RedirectionTsvUrl" },
	{ FreeRDP_ServerAutoReconnectCookie, 8, "FreeRDP_ServerAutoReconnectCookie" },
	{ FreeRDP_ServerCertificate, 8, "FreeRDP_ServerCertificate" },
	{ FreeRDP_ServerRandom, 8, "FreeRDP_ServerRandom" },
	{ FreeRDP_StaticChannelArray, 8, "FreeRDP_StaticChannelArray" },
	{ FreeRDP_TargetNetAddresses, 8, "FreeRDP_TargetNetAddresses" },
	{ FreeRDP_TargetNetPorts, 8, "FreeRDP_TargetNetPorts" },
	{ FreeRDP_instance, 8, "FreeRDP_instance" },
};

BOOL freerdp_settings_clone_keys(rdpSettings* dst, const rdpSettings* src)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		switch (cur->type)
		{
			case 0: /* bool */
			{
				BOOL sval = freerdp_settings_get_bool(src, cur->id);
				if (!freerdp_settings_set_bool(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 1: /* UINT16 */
			{
				UINT16 sval = freerdp_settings_get_uint16(src, cur->id);
				if (!freerdp_settings_set_uint16(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 2: /* INT16 */
			{
				INT16 sval = freerdp_settings_get_int16(src, cur->id);
				if (!freerdp_settings_set_int16(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 3: /* UINT32 */
			{
				UINT32 sval = freerdp_settings_get_uint32(src, cur->id);
				if (!freerdp_settings_set_uint32(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 4: /* INT32 */
			{
				INT32 sval = freerdp_settings_get_int32(src, cur->id);
				if (!freerdp_settings_set_int32(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 5: /* UINT64 */
			{
				UINT64 sval = freerdp_settings_get_uint64(src, cur->id);
				if (!freerdp_settings_set_uint64(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 6: /* INT64 */
			{
				INT64 sval = freerdp_settings_get_int64(src, cur->id);
				if (!freerdp_settings_set_int64(dst, cur->id, sval))
					return FALSE;
			}
			break;
			case 7: /* strings */
			{
				const char* sval = freerdp_settings_get_string(src, cur->id);
				size_t len = 0;
				if (sval)
					len = strlen(sval);
				if (!freerdp_settings_set_string_(dst, cur->id, sval, len, FALSE))
					return FALSE;
			}
			break;
			case 8: /* pointer */
			{
				const void* sval = freerdp_settings_get_pointer(src, cur->id);
				if (!freerdp_settings_set_pointer(dst, cur->id, sval))
					return FALSE;
			}
			break;
		}
	}
	return TRUE;
}

BOOL freerdp_settings_print_diff(wLog* log, DWORD level, const rdpSettings* settings,
                                 const rdpSettings* other)
{
	size_t x;
	BOOL rc = FALSE;

	if (!settings && other)
		rc = TRUE;
	if (settings && !other)
		rc = TRUE;

	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		switch (cur->type)
		{
			case 0: /* bool */
			{
				BOOL sval = freerdp_settings_get_bool(settings, cur->id);
				BOOL cval = freerdp_settings_get_bool(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [BOOL]: %s -> %s", cur->str, sval ? "TRUE" : "FALSE",
					           cval ? "TRUE" : "FALSE");
					rc = TRUE;
				}
			}
			break;
			case 1: /* UINT16 */
			{
				UINT16 sval = freerdp_settings_get_uint16(settings, cur->id);
				UINT16 cval = freerdp_settings_get_uint16(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [UINT16]: %" PRIu16 " -> %" PRIu16, cur->str, sval,
					           cval);
					rc = TRUE;
				}
			}
			break;
			case 2: /* INT16 */
			{
				INT16 sval = freerdp_settings_get_int16(settings, cur->id);
				INT16 cval = freerdp_settings_get_int16(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [INT16]: %" PRId16 " -> %" PRId16, cur->str, sval,
					           cval);
					rc = TRUE;
				}
			}
			break;
			case 3: /* UINT32 */
			{
				UINT32 sval = freerdp_settings_get_uint32(settings, cur->id);
				UINT32 cval = freerdp_settings_get_uint32(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [UINT32]: %" PRIu32 " -> %" PRIu32, cur->str, sval,
					           cval);
					rc = TRUE;
				}
			}
			break;
			case 4: /* INT32 */
			{
				INT32 sval = freerdp_settings_get_int32(settings, cur->id);
				INT32 cval = freerdp_settings_get_int32(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [INT32]: %" PRId32 " -> %" PRId32, cur->str, sval,
					           cval);
					rc = TRUE;
				}
			}
			break;
			case 5: /* UINT64 */
			{
				UINT64 sval = freerdp_settings_get_uint64(settings, cur->id);
				UINT64 cval = freerdp_settings_get_uint64(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [UINT64]: %" PRIu64 " -> %" PRIu64, cur->str, sval,
					           cval);
					rc = TRUE;
				}
			}
			break;
			case 6: /* INT64 */
			{
				INT64 sval = freerdp_settings_get_int64(settings, cur->id);
				INT64 cval = freerdp_settings_get_int64(other, cur->id);
				if (sval != cval)
				{
					WLog_Print(log, level, "%s [INT64]: %" PRId64 " -> %" PRId64, cur->str, sval,
					           cval);
					rc = TRUE;
				}
			}
			break;
			case 7: /* strings */
			{
				const char* sval = freerdp_settings_get_string(settings, cur->id);
				const char* cval = freerdp_settings_get_string(other, cur->id);
				if (sval != cval)
				{
					if (!sval || !cval || (strcmp(sval, cval) != 0))
					{
						WLog_Print(log, level, "%s [STRING]: '%s' -> '%s'", cur->str, sval, cval);
						rc = TRUE;
					}
				}
			}
			break;
			case 8: /* pointer */
			{
				const void* sval = freerdp_settings_get_pointer(settings, cur->id);
				const void* cval = freerdp_settings_get_pointer(other, cur->id);
				if (sval != cval)
				{
					if ((sval && !cval) || (!sval && cval))
					{
						WLog_Print(log, level, "%s [POINTER]: '%p' -> '%p'", cur->str, sval, cval);
						rc = TRUE;
					}
				}
			}
			break;
		}
	}
	return rc;
}
void freerdp_settings_dump(wLog* log, DWORD level, const rdpSettings* settings)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		switch (cur->type)
		{
			case 0: /* bool */
			{
				BOOL sval = freerdp_settings_get_bool(settings, cur->id);
				WLog_Print(log, level, "%s [BOOL]: %s", cur->str, sval ? "TRUE" : "FALSE");
			}
			break;
			case 1: /* UINT16 */
			{
				UINT16 sval = freerdp_settings_get_uint16(settings, cur->id);
				WLog_Print(log, level, "%s [UINT16]: %" PRIu16, cur->str, sval);
			}
			break;
			case 2: /* INT16 */
			{
				INT16 sval = freerdp_settings_get_int16(settings, cur->id);
				WLog_Print(log, level, "%s [INT16]: %" PRId16, cur->str, sval);
			}
			break;
			case 3: /* UINT32 */
			{
				UINT32 sval = freerdp_settings_get_uint32(settings, cur->id);
				WLog_Print(log, level, "%s [UINT32]: %" PRIu32, cur->str, sval);
			}
			break;
			case 4: /* INT32 */
			{
				INT32 sval = freerdp_settings_get_int32(settings, cur->id);
				WLog_Print(log, level, "%s [INT32]: %" PRId32, cur->str, sval);
			}
			break;
			case 5: /* UINT64 */
			{
				UINT64 sval = freerdp_settings_get_uint64(settings, cur->id);
				WLog_Print(log, level, "%s [UINT64]: %" PRIu64, cur->str, sval);
			}
			break;
			case 6: /* INT64 */
			{
				INT64 sval = freerdp_settings_get_int64(settings, cur->id);
				WLog_Print(log, level, "%s [INT64]: %" PRId64, cur->str, sval);
			}
			break;
			case 7: /* strings */
			{
				const char* sval = freerdp_settings_get_string(settings, cur->id);
				WLog_Print(log, level, "%s [STRING]: '%s'", cur->str, sval);
			}
			break;
			case 8: /* pointer */
			{
				const void* sval = freerdp_settings_get_pointer(settings, cur->id);
				WLog_Print(log, level, "%s [POINTER]: '%p'", cur->str, sval);
			}
			break;
		}
	}
}

void freerdp_settings_free_keys(rdpSettings* dst, BOOL cleanup)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		switch (cur->type)
		{
			case 7: /* strings */
				freerdp_settings_set_string_(dst, cur->id, NULL, 0, cleanup);
				break;
			case 8: /* pointer */
				freerdp_settings_set_pointer_len(dst, cur->id, NULL, 0);
				break;
		}
	}
}

SSIZE_T freerdp_settings_get_key_for_name(const char* value)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		if (strcmp(value, cur->str) == 0)
			return cur->id;
	}
	return -1;
}

SSIZE_T freerdp_settings_get_type_for_name(const char* value)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		if (strcmp(value, cur->str) == 0)
			return cur->type;
	}
	return -1;
}

SSIZE_T freerdp_settings_get_type_for_key(size_t key)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		if (cur->id == key)
			return cur->type;
	}
	return -1;
}

const char* freerdp_settings_get_name_for_key(size_t key)
{
	size_t x;
	for (x = 0; x < ARRAYSIZE(settings_map); x++)
	{
		const struct settings_str_entry* cur = &settings_map[x];
		if (cur->id == key)
			return cur->str;
	}
	return NULL;
}
