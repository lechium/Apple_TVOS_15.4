//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct AudioTimeStamp {
    double _field1;
    unsigned long long _field2;
    double _field3;
    unsigned long long _field4;
    struct SMPTETime _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct AudioUnitParameterInfo {
    char _field1[52];
    struct __CFString *_field2;
    unsigned int _field3;
    struct __CFString *_field4;
    unsigned int _field5;
    float _field6;
    float _field7;
    float _field8;
    unsigned int _field9;
};

struct Box;

struct CABufferList;

struct FormatAndBlockSize {
    struct AudioStreamBasicDescription mFormat;
    unsigned int mBlockSize;
};

struct Graph;

struct Interpreter;

struct ProcessingNode;

struct ProcessingTree {
    shared_ptr_f6ac7592 mGraph;
    struct list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> mProcessingContexts;
    struct list<SoundAnalysis::FormatMatchingNode, std::allocator<SoundAnalysis::FormatMatchingNode>> mFormatMatchingNodes;
    struct list<SoundAnalysis::SharedProcessingNode, std::allocator<SoundAnalysis::SharedProcessingNode>> mSharedProcessingNodes;
    struct list<SoundAnalysis::AnalyzerNode, std::allocator<SoundAnalysis::AnalyzerNode>> mAnalyzerNodes;
    struct RootNode mRootNode;
    unsigned int mMaxFramesPerSlice;
    struct function<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> mWillInitializeCallback;
    long long mCurrentInputSampleTime;
};

struct RingBuffer;

struct RootNode {
    CDUnknownFunctionPointerType *_vptr$ProcessingNode;
    struct ProcessingNode *mUpstreamNode;
    struct list<SoundAnalysis::ProcessingNode *, std::allocator<SoundAnalysis::ProcessingNode *>> mDownstreamNodes;
    struct Box *mProcessingBox;
    struct FormatAndBlockSize mUpstreamFormat;
    struct FormatAndBlockSize mDownstreamFormat;
};

struct SMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct SNLogMelParameters {
    float sampleRate;
    unsigned int numMelBands;
    float minFrequency;
    float maxFrequency;
    int melType;
    unsigned int hopLength;
    unsigned int windowLength;
    unsigned int windowOffset;
    unsigned int fftLength;
    int fftOffset;
    int normalizationStrategy;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

struct function<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> {
    struct __value_func<void (std::shared_ptr<DSPGraph::Graph>, unsigned long)> {
        struct type __buf_;
        void *__f_;
    } __f_;
};

struct list<SoundAnalysis::AnalyzerNode, std::allocator<SoundAnalysis::AnalyzerNode>> {
    struct __list_node_base<SoundAnalysis::AnalyzerNode, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::AnalyzerNode, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<SoundAnalysis::FormatMatchingNode, std::allocator<SoundAnalysis::FormatMatchingNode>> {
    struct __list_node_base<SoundAnalysis::FormatMatchingNode, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::FormatMatchingNode, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<SoundAnalysis::MD5Hash, std::allocator<SoundAnalysis::MD5Hash>> {
    struct __list_node_base<SoundAnalysis::MD5Hash, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::MD5Hash, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<SoundAnalysis::ProcessingContext, std::allocator<SoundAnalysis::ProcessingContext>> {
    struct __list_node_base<SoundAnalysis::ProcessingContext, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingContext, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<SoundAnalysis::ProcessingNode *, std::allocator<SoundAnalysis::ProcessingNode *>> {
    struct __list_node_base<SoundAnalysis::ProcessingNode *, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::ProcessingNode *, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct list<SoundAnalysis::SharedProcessingNode, std::allocator<SoundAnalysis::SharedProcessingNode>> {
    struct __list_node_base<SoundAnalysis::SharedProcessingNode, void *> {
        void *__prev_;
        void *__next_;
    } __end_;
    struct __compressed_pair<unsigned long, std::allocator<std::__list_node<SoundAnalysis::SharedProcessingNode, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct shared_ptr<DSPGraph::Graph> {
    struct Graph *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct type {
    unsigned char __lx[32];
};

struct unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> {
    struct __compressed_pair<AT::RingBuffer *, std::default_delete<AT::RingBuffer>> {
        struct RingBuffer *__value_;
    } __ptr_;
};

struct unique_ptr<CABufferList, std::default_delete<CABufferList>> {
    struct __compressed_pair<CABufferList *, std::default_delete<CABufferList>> {
        struct CABufferList *__value_;
    } __ptr_;
};

struct unique_ptr<DSPGraph::Graph, std::default_delete<DSPGraph::Graph>> {
    struct __compressed_pair<DSPGraph::Graph *, std::default_delete<DSPGraph::Graph>> {
        struct Graph *__value_;
    } __ptr_;
};

struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> {
    struct __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> {
        struct Interpreter *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> {
        void **_field1;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<SoundAnalysis::MD5Hash, id<MLFeatureProvider>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, std::allocator<std::pair<const SoundAnalysis::MD5Hash, id<MLFeatureProvider>>>> {
    struct __hash_table<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::__unordered_map_hasher<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, true>, std::__unordered_map_equal<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::equal_to<SoundAnalysis::MD5Hash>, std::hash<SoundAnalysis::MD5Hash>, true>, std::allocator<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::hash<SoundAnalysis::MD5Hash>, std::equal_to<SoundAnalysis::MD5Hash>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<SoundAnalysis::MD5Hash, std::__hash_value_type<SoundAnalysis::MD5Hash, id<MLFeatureProvider>>, std::equal_to<SoundAnalysis::MD5Hash>, std::hash<SoundAnalysis::MD5Hash>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<std::string, std::allocator<std::string>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Template types
typedef struct shared_ptr<DSPGraph::Graph> {
    struct Graph *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_f6ac7592;

typedef struct unique_ptr<DSPGraph::Graph, std::default_delete<DSPGraph::Graph>> {
    struct __compressed_pair<DSPGraph::Graph *, std::default_delete<DSPGraph::Graph>> {
        struct Graph *__value_;
    } __ptr_;
} unique_ptr_a0b8f5a3;

typedef struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> {
            float _field1;
        } _field4;
    } _field1;
} unordered_map_048dd119;

typedef struct vector<std::string, std::allocator<std::string>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *_field1;
    } _field3;
} vector_74824a0a;

