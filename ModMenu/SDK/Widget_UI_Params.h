#pragma once

/**
 * Name: RagsToDishes
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Widget_UI.Widget_UI_C.SkipMultiTextRender
	 */
	struct UWidget_UI_C_SkipMultiTextRender_Params
	{	};

	/**
	 * Function Widget_UI.Widget_UI_C.SetMultTextToRender
	 */
	struct UWidget_UI_C_SetMultTextToRender_Params
	{	};

	/**
	 * Function Widget_UI.Widget_UI_C.RenderMultipleWidgets
	 */
	struct UWidget_UI_C_RenderMultipleWidgets_Params
	{
	public:
		TArray<class UTextBlock*>                                  TextsToRender;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Widget_UI.Widget_UI_C.SkipTextRender
	 */
	struct UWidget_UI_C_SkipTextRender_Params
	{	};

	/**
	 * Function Widget_UI.Widget_UI_C.SetTextToRender
	 */
	struct UWidget_UI_C_SetTextToRender_Params
	{	};

	/**
	 * Function Widget_UI.Widget_UI_C.RenderTextWidget
	 */
	struct UWidget_UI_C_RenderTextWidget_Params
	{
	public:
		class UTextBlock*                                          TextToRender;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_UI.Widget_UI_C.TextRenderingFinished__DelegateSignature
	 */
	struct UWidget_UI_C_TextRenderingFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
