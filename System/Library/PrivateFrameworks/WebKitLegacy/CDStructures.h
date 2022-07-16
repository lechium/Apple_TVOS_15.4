//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AlternativeTextUIController;

struct ArchiveResource;

struct Atomic<unsigned char> {
    struct atomic<unsigned char> value;
};

struct BoundaryPoint {
    struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> _field1;
    unsigned int _field2;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Command {
    struct EditorInternalCommand *_field1;
    int _field2;
    struct RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>> _field3;
    struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> _field4;
};

struct DOMWrapperWorld;

struct DeviceOrientationClientMock;

struct DeviceOrientationData;

struct Document;

struct DocumentLoader;

struct EditorInternalCommand;

struct FileChooser;

struct FloatPoint {
    float _field1;
    float _field2;
};

struct FloatRect {
    struct FloatPoint _field1;
    struct FloatSize _field2;
};

struct FloatSize {
    _Bool _field1;
    _Bool _field2;
    float _field3;
    float _field4;
};

struct Frame;

struct Function<void (WebCore::PolicyAction, WebCore::PolicyCheckIdentifier)> {
    struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> m_callableWrapper;
};

struct Geolocation;

struct GeolocationPositionData {
    double timestamp;
    double latitude;
    double longitude;
    double accuracy;
    struct optional<double> altitude;
    struct optional<double> altitudeAccuracy;
    struct optional<double> heading;
    struct optional<double> speed;
    struct optional<double> floorLevel;
};

struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::HashTableTraits> {
    struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView>>> m_impl;
};

struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> {
    struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> m_impl;
};

struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> {
    struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> m_impl;
};

struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView>>> {
    CDUnion_f697d383 ;
};

struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> {
    union {
        id *m_table;
        unsigned int *m_tableForLLDB;
    } ;
};

struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> {
    CDUnion_f697d383 ;
};

struct HistoryItem;

struct InspectorController;

struct JSCell;

struct JSValue {
    union EncodedValueDescriptor u;
};

struct KeyboardEvent;

struct LayerFlushController;

struct LegacyWebArchive;

struct Lock {
    struct Atomic<unsigned char> m_byte;
};

struct MimeClassInfo;

struct NakedPtr<WebCore::DocumentLoader> {
    struct DocumentLoader *_field1;
};

struct NakedPtr<WebCore::Frame> {
    struct Frame *m_ptr;
};

struct NakedPtr<WebCore::Geolocation> {
    struct Geolocation *_field1;
};

struct NakedPtr<WebCore::InspectorController> {
    struct InspectorController *m_ptr;
};

struct NakedPtr<WebCore::Page> {
    struct Page *_field1;
};

struct NakedPtr<WebInspectorFrontendClient> {
    struct WebInspectorFrontendClient *m_ptr;
};

struct NakedRef<WebCore::ArchiveResource> {
    struct ArchiveResource *_field1;
};

struct NakedRef<WebCore::Geolocation> {
    struct Geolocation *_field1;
};

struct Node;

struct ObjectIdentifier<WebCore::DictationContextType> {
    unsigned long long _field1;
};

struct ObjectIdentifier<WebCore::ProcessIdentifierType> {
    unsigned long long m_identifier;
};

struct OptionSet<WebCore::PaintBehavior> {
    unsigned short _field1;
};

struct Page;

struct PluginInfo {
    struct String name;
    struct String file;
    struct String desc;
    struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> mimes;
    _Bool isApplicationPlugin;
    unsigned char clientLoadPolicy;
    struct String bundleIdentifier;
};

struct PolicyCheckIdentifier {
    struct ObjectIdentifier<WebCore::ProcessIdentifierType> m_process;
    unsigned long long m_policyCheck;
};

struct Position {
    struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> _field1;
    unsigned int _field2;
    unsigned int :3;
    unsigned int :1;
};

struct Ref<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>> {
    struct Frame *_field1;
};

struct Ref<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>> {
    struct Node *_field1;
};

struct RefPtr<LayerFlushController, WTF::RawPtrTraits<LayerFlushController>, WTF::DefaultRefDerefTraits<LayerFlushController>> {
    struct LayerFlushController *m_ptr;
};

struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> {
    struct StringImpl *m_ptr;
};

struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> {
    struct ArchiveResource *m_ptr;
};

struct RefPtr<WebCore::DOMWrapperWorld, WTF::RawPtrTraits<WebCore::DOMWrapperWorld>, WTF::DefaultRefDerefTraits<WebCore::DOMWrapperWorld>> {
    struct DOMWrapperWorld *m_ptr;
};

struct RefPtr<WebCore::DeviceOrientationData, WTF::RawPtrTraits<WebCore::DeviceOrientationData>, WTF::DefaultRefDerefTraits<WebCore::DeviceOrientationData>> {
    struct DeviceOrientationData *m_ptr;
};

struct RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>> {
    struct Document *_field1;
};

struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> {
    struct FileChooser *m_ptr;
};

struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> {
    struct Frame *m_ptr;
};

struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> {
    struct Geolocation *m_ptr;
};

struct RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>> {
    struct HistoryItem *m_ptr;
};

struct RefPtr<WebCore::LegacyWebArchive, WTF::RawPtrTraits<WebCore::LegacyWebArchive>, WTF::DefaultRefDerefTraits<WebCore::LegacyWebArchive>> {
    struct LegacyWebArchive *m_ptr;
};

struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> {
    struct Node *_field1;
};

struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> {
    struct UndoStep *m_ptr;
};

struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> {
    struct ValidationBubble *m_ptr;
};

struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> {
    struct WebViewGroup *m_ptr;
};

struct RetainPtr<CGColor *> {
    void *m_ptr;
};

struct RetainPtr<CLLocationManager> {
    void *m_ptr;
};

struct RetainPtr<NSArray> {
    void *m_ptr;
};

struct RetainPtr<NSData> {
    void *m_ptr;
};

struct RetainPtr<NSMutableArray> {
    void *m_ptr;
};

struct RetainPtr<NSMutableDictionary> {
    void *m_ptr;
};

struct RetainPtr<NSMutableSet> {
    void *m_ptr;
};

struct RetainPtr<NSString> {
    void *m_ptr;
};

struct RetainPtr<NSTimer> {
    void *m_ptr;
};

struct RetainPtr<NSURLRequest> {
    void *m_ptr;
};

struct RetainPtr<NSURLResponse> {
    void *m_ptr;
};

struct RetainPtr<WAKScrollView> {
    void *m_ptr;
};

struct RetainPtr<WAKWindow> {
    void *m_ptr;
};

struct RetainPtr<WebDataSource> {
    void *m_ptr;
};

struct RetainPtr<WebEvent> {
    void *m_ptr;
};

struct RetainPtr<WebFixedPositionContent> {
    void *m_ptr;
};

struct RetainPtr<WebFrameView> {
    void *m_ptr;
};

struct RetainPtr<WebGeolocationCoreLocationProvider> {
    void *m_ptr;
};

struct RetainPtr<WebGeolocationPosition> {
    void *m_ptr;
};

struct RetainPtr<WebIndicateLayer> {
    void *m_ptr;
};

struct RetainPtr<WebInspector> {
    void *m_ptr;
};

struct RetainPtr<WebNodeHighlight> {
    void *m_ptr;
};

struct RetainPtr<WebPluginController> {
    void *m_ptr;
};

struct RetainPtr<WebPreferences> {
    void *m_ptr;
};

struct RetainPtr<WebResource> {
    void *m_ptr;
};

struct RetainPtr<WebVideoFullscreenController> {
    void *m_ptr;
};

struct RetainPtr<WebView> {
    void *m_ptr;
};

struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> {
    void *m_ptr;
};

struct RetainPtr<__CFBundle *> {
    void *m_ptr;
};

struct RetainPtr<id> {
    void *m_ptr;
};

struct SimpleRange {
    struct BoundaryPoint _field1;
    struct BoundaryPoint _field2;
};

struct String {
    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> m_impl;
};

struct StringImpl;

struct TextIterator;

struct UndoStep;

struct UserContentURLPattern {
    _Bool m_invalid;
    struct String m_scheme;
    struct String m_host;
    struct String m_path;
    _Bool m_matchSubdomains;
};

struct ValidationBubble;

struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    struct String *_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Vector<WebCore::MimeClassInfo, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    struct MimeClassInfo *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    unsigned short *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct VisiblePosition {
    struct Position _field1;
    _Bool _field2;
};

struct WebEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct WebFrameLoadDelegateImplementationCache {
    CDUnknownFunctionPointerType didCreateJavaScriptContextForFrameFunc;
    CDUnknownFunctionPointerType didClearWindowObjectForFrameFunc;
    CDUnknownFunctionPointerType didClearWindowObjectForFrameInScriptWorldFunc;
    CDUnknownFunctionPointerType didClearInspectorWindowObjectForFrameFunc;
    CDUnknownFunctionPointerType windowScriptObjectAvailableFunc;
    CDUnknownFunctionPointerType didHandleOnloadEventsForFrameFunc;
    CDUnknownFunctionPointerType didReceiveServerRedirectForProvisionalLoadForFrameFunc;
    CDUnknownFunctionPointerType didCancelClientRedirectForFrameFunc;
    CDUnknownFunctionPointerType willPerformClientRedirectToURLDelayFireDateForFrameFunc;
    CDUnknownFunctionPointerType didChangeLocationWithinPageForFrameFunc;
    CDUnknownFunctionPointerType didPushStateWithinPageForFrameFunc;
    CDUnknownFunctionPointerType didReplaceStateWithinPageForFrameFunc;
    CDUnknownFunctionPointerType didPopStateWithinPageForFrameFunc;
    CDUnknownFunctionPointerType willCloseFrameFunc;
    CDUnknownFunctionPointerType didStartProvisionalLoadForFrameFunc;
    CDUnknownFunctionPointerType didReceiveTitleForFrameFunc;
    CDUnknownFunctionPointerType didCommitLoadForFrameFunc;
    CDUnknownFunctionPointerType didFailProvisionalLoadWithErrorForFrameFunc;
    CDUnknownFunctionPointerType didFailLoadWithErrorForFrameFunc;
    CDUnknownFunctionPointerType didFinishLoadForFrameFunc;
    CDUnknownFunctionPointerType didFirstLayoutInFrameFunc;
    CDUnknownFunctionPointerType didFirstVisuallyNonEmptyLayoutInFrameFunc;
    CDUnknownFunctionPointerType didLayoutFunc;
    CDUnknownFunctionPointerType didReceiveIconForFrameFunc;
    CDUnknownFunctionPointerType didFinishDocumentLoadForFrameFunc;
    CDUnknownFunctionPointerType didDisplayInsecureContentFunc;
    CDUnknownFunctionPointerType didRunInsecureContentFunc;
    CDUnknownFunctionPointerType didDetectXSSFunc;
    CDUnknownFunctionPointerType didRemoveFrameFromHierarchyFunc;
    CDUnknownFunctionPointerType webThreadDidLayoutFunc;
};

struct WebHTMLViewInterpretKeyEventsParameters {
    struct KeyboardEvent *_field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
};

struct WebHistoryDelegateImplementationCache {
    CDUnknownFunctionPointerType navigatedFunc;
    CDUnknownFunctionPointerType clientRedirectFunc;
    CDUnknownFunctionPointerType serverRedirectFunc;
    CDUnknownFunctionPointerType deprecatedSetTitleFunc;
    CDUnknownFunctionPointerType setTitleFunc;
    CDUnknownFunctionPointerType populateVisitedLinksFunc;
};

struct WebInspectorFrontendClient;

struct WebResourceDelegateImplementationCache {
    CDUnknownFunctionPointerType didReceiveAuthenticationChallengeFunc;
    CDUnknownFunctionPointerType canAuthenticateAgainstProtectionSpaceFunc;
    CDUnknownFunctionPointerType connectionPropertiesFunc;
    CDUnknownFunctionPointerType webThreadDidFinishLoadingFromDataSourceFunc;
    CDUnknownFunctionPointerType webThreadDidFailLoadingWithErrorFromDataSourceFunc;
    CDUnknownFunctionPointerType webThreadIdentifierForRequestFunc;
    CDUnknownFunctionPointerType webThreadDidLoadResourceFromMemoryCacheFunc;
    CDUnknownFunctionPointerType webThreadWillSendRequestFunc;
    CDUnknownFunctionPointerType webThreadDidReceiveResponseFunc;
    CDUnknownFunctionPointerType webThreadDidReceiveContentLengthFunc;
    CDUnknownFunctionPointerType webThreadWillCacheResponseFunc;
    CDUnknownFunctionPointerType identifierForRequestFunc;
    CDUnknownFunctionPointerType willSendRequestFunc;
    CDUnknownFunctionPointerType didReceiveResponseFunc;
    CDUnknownFunctionPointerType didReceiveContentLengthFunc;
    CDUnknownFunctionPointerType didFinishLoadingFromDataSourceFunc;
    CDUnknownFunctionPointerType didFailLoadingWithErrorFromDataSourceFunc;
    CDUnknownFunctionPointerType didLoadResourceFromMemoryCacheFunc;
    CDUnknownFunctionPointerType willCacheResponseFunc;
    CDUnknownFunctionPointerType plugInFailedWithErrorFunc;
    CDUnknownFunctionPointerType shouldUseCredentialStorageFunc;
    CDUnknownFunctionPointerType shouldPaintBrokenImageForURLFunc;
};

struct WebScriptDebugDelegateImplementationCache {
    _Bool didParseSourceExpectsBaseLineNumber;
    _Bool exceptionWasRaisedExpectsHasHandlerFlag;
    CDUnknownFunctionPointerType didParseSourceFunc;
    CDUnknownFunctionPointerType failedToParseSourceFunc;
    CDUnknownFunctionPointerType exceptionWasRaisedFunc;
};

struct WebScriptDebugger;

struct WebViewGroup;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _WKQuad {
    struct CGPoint p1;
    struct CGPoint p2;
    struct CGPoint p3;
    struct CGPoint p4;
};

struct atomic<unsigned char> {
    struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> {
        _Atomic unsigned char __a_value;
    } __a_;
};

struct optional<WebCore::SimpleRange> {
    union {
        char _field1;
        struct SimpleRange _field2;
    } _field1;
    _Bool _field2;
};

struct optional<double> {
    union {
        char __null_state_;
        double __val_;
    } ;
    _Bool __engaged_;
};

struct unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> {
    struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>*, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::PolicyAction, WebCore::PolicyCheckIdentifier>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> {
    struct __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>*, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> {
    struct __compressed_pair<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>*, std::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> {
    struct __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> {
        struct AlternativeTextUIController *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::DeviceOrientationClientMock, std::default_delete<WebCore::DeviceOrientationClientMock>> {
    struct __compressed_pair<WebCore::DeviceOrientationClientMock *, std::default_delete<WebCore::DeviceOrientationClientMock>> {
        struct DeviceOrientationClientMock *__value_;
    } __ptr_;
};

struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> {
    struct __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>> {
        struct TextIterator *__value_;
    } __ptr_;
};

struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> {
    struct __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> {
        struct WebScriptDebugger *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

// Template types
typedef struct NakedPtr<WebCore::DocumentLoader> {
    struct DocumentLoader *_field1;
} NakedPtr_2c503e7f;

typedef struct NakedPtr<WebCore::Frame> {
    struct Frame *m_ptr;
} NakedPtr_4ac97545;

typedef struct NakedPtr<WebCore::Geolocation> {
    struct Geolocation *_field1;
} NakedPtr_331571b6;

typedef struct NakedPtr<WebCore::InspectorController> {
    struct InspectorController *m_ptr;
} NakedPtr_5b249b89;

typedef struct NakedPtr<WebCore::Page> {
    struct Page *_field1;
} NakedPtr_4f2b354f;

typedef struct NakedPtr<WebInspectorFrontendClient> {
    struct WebInspectorFrontendClient *m_ptr;
} NakedPtr_fc424271;

typedef struct NakedRef<WebCore::ArchiveResource> {
    struct ArchiveResource *_field1;
} NakedRef_f8818be1;

typedef struct NakedRef<WebCore::Geolocation> {
    struct Geolocation *_field1;
} NakedRef_f8c98cc9;

typedef struct ObjectIdentifier<WebCore::DictationContextType> {
    unsigned long long _field1;
} ObjectIdentifier_2e565102;

typedef struct OptionSet<WebCore::PaintBehavior> {
    unsigned short _field1;
} OptionSet_8e32cbf3;

typedef struct Ref<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>> {
    struct Frame *_field1;
} Ref_50ba636d;

typedef struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    struct String *_field1;
    unsigned int _field2;
    unsigned int _field3;
} Vector_7aeb0c1e;

typedef struct optional<WebCore::SimpleRange> {
    union {
        char _field1;
        struct SimpleRange _field2;
    } _field1;
    _Bool _field2;
} optional_8a7f6590;

#pragma mark Named Unions

union EncodedValueDescriptor {
    long long asInt64;
    struct JSCell *ptr;
    struct {
        int payload;
        int tag;
    } asBits;
};

#pragma mark Typedef'd Unions

typedef union {
    void *m_table;
    unsigned int *m_tableForLLDB;
} CDUnion_f697d383;
