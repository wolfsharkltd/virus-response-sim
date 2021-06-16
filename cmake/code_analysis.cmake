
option(ENABLE_CODE_ANALYSIS "Enable code analysis" OFF)

function(target_analyse_code target)
    if(ENABLE_CODE_ANALYSIS)
        if(MSVC)
            set_target_properties(${target} PROPERTIES
                VS_GLOBAL_RunCodeAnalysis true
                VS_GLOBAL_EnableMicrosoftCodeAnalysis false
                VS_GLOBAL_EnableClangTidyCodeAnalysis true
            )
        else(MSVC)
            message(SEND_ERROR "code analysis is not supported on this platform, skipping..." )
        endif(MSVC)
    endif(ENABLE_CODE_ANALYSIS)
endfunction()
