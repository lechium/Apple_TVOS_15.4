//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct CMTouchHistory;

struct DictionaryContainer;

struct HCIndexTableFileHeader {
    unsigned int _field1;
    unsigned short _field2;
    unsigned char _field3[16];
};

struct KeyboardLayout;

struct LanguageModel;

struct LanguageModelContext {
    struct vector<TITokenID, std::allocator<TITokenID>> _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    struct LinguisticContext _field4;
    struct LinguisticContext _field5;
    struct vector<std::string, std::allocator<std::string>> _field6;
};

struct LinguisticContext {
    struct unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> _field1;
};

struct LinguisticContextImpl;

struct Path {
    struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> m_samples;
    struct vector<unsigned int, std::allocator<unsigned int>> m_inflection_points;
};

struct PathResampler {
    struct PathResamplerParams m_params;
    struct Path m_resampled_path;
    struct Path m_raw_path;
    _Bool m_is_final;
    unsigned int m_processed_sample_count;
    unsigned int m_retroactively_processed_sample_count;
};

struct PathResamplerParams {
    double segment_length;
    int inflection_point_detection_mode;
    int inflection_point_type;
    _Bool should_downsample;
    double minimum_pause_length;
    _Bool should_flush_on_pause;
};

struct PathSample;

struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *m_ptr;
};

struct RefPtr<TI::Favonius::CMTouchHistory> {
    struct CMTouchHistory *m_ptr;
};

struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *m_ptr;
};

struct StaticDictionary;

struct String {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4;
    char *_field5;
    char _field6[16];
};

struct TITokenID {
    unsigned int lexicon_id;
    unsigned int word_id;
};

struct TypologyLogger;

struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> {
    unsigned long long _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> _field2;
};

struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> {
    void *_field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _TIRevisionHistoryTokenIterator {
    unsigned long long tokenIndex;
    unsigned long long documentLocation;
};

struct __shared_weak_count;

struct pair<NSString *, NSArray<NSNumber *>*> {
    id _field1;
    id _field2;
};

struct shared_ptr<KB::LanguageModel> {
    struct LanguageModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<KB::TypologyLogger> {
    struct TypologyLogger *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<KB::StaticDictionary, std::default_delete<KB::StaticDictionary>> {
    struct __compressed_pair<KB::StaticDictionary *, std::default_delete<KB::StaticDictionary>> {
        struct StaticDictionary *__value_;
    } __ptr_;
};

struct unique_ptr<language_modeling::LinguisticContextImpl, std::default_delete<language_modeling::LinguisticContextImpl>> {
    struct __compressed_pair<language_modeling::LinguisticContextImpl *, std::default_delete<language_modeling::LinguisticContextImpl>> {
        struct LinguisticContextImpl *_field1;
    } _field1;
};

struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> {
        CDStruct_183601bc *_field1;
    } _field3;
};

struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> {
    struct PathSample *__begin_;
    struct PathSample *__end_;
    struct __compressed_pair<TI::CP::PathSample *, std::allocator<TI::CP::PathSample>> {
        struct PathSample *__value_;
    } __end_cap_;
};

struct vector<TITokenID, std::allocator<TITokenID>> {
    struct TITokenID *__begin_;
    struct TITokenID *__end_;
    struct __compressed_pair<TITokenID *, std::allocator<TITokenID>> {
        struct TITokenID *__value_;
    } __end_cap_;
};

struct vector<std::string, std::allocator<std::string>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *_field1;
    } _field3;
};

struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

struct vector<unsigned long long, std::allocator<unsigned long long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
} CDStruct_2418a849;

typedef struct CDStruct_183601bc;

typedef struct {
    struct String _field1;
    struct String _field2;
    struct String _field3;
    struct String _field4;
    struct String _field5;
    unsigned int _field6;
    float _field7;
} CDStruct_69b8fb94;

// Template types
typedef struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *m_ptr;
} RefPtr_9bddf3b2;

typedef struct RefPtr<TI::Favonius::CMTouchHistory> {
    struct CMTouchHistory *m_ptr;
} RefPtr_48eecea7;

typedef struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *m_ptr;
} RefPtr_54d74a7c;

typedef struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> {
    unsigned long long _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> _field2;
} Vector_7a42a24c;

typedef struct pair<NSString *, NSArray<NSNumber *>*> {
    id _field1;
    id _field2;
} pair_bbbbc461;

typedef struct shared_ptr<KB::LanguageModel> {
    struct LanguageModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_e9f752ce;

typedef struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> {
        CDStruct_183601bc *_field1;
    } _field3;
} vector_ce1a2964;

