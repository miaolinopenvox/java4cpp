//%%%% Lines beginning with "//%%%%" are template comments and removed from final output.
//%%%% "%NAMESPACE%" will be replaced with namespace
//%%%% "%HEADER%" will be replaced with header
//%%%% "%HEADER_DEFINE%" will be replaced with defined value used to prevent multiple inclusion
//%%%% "%CLASS_NAME%" will be replaced with className (not including package
//%%% "%BASE_CLASS_FULL_NAME%" full name of this class's Base class.
//%%%% "%OBJECT_CLASS_FULL_NAME%" will be replaced with className (not including package

// get JNI handle for class %FULL_CLASS_NAME%
static inline jclass get%CLASS_NAME%Class();

%CLASS_NAME%::%CLASS_NAME%(jobject _jthis, bool copy): %BASE_CLASS_FULL_NAME%(_jthis,copy) {
        // Place holder for future extensibility
}

%CLASS_NAME%::%CLASS_NAME%(const %CLASS_NAME% &objref) {
    jobject _jthis = objref.jthis;
    if (_jthis != NULL) {
        jthis = getEnv()->NewGlobalRef(_jthis);
    }
}