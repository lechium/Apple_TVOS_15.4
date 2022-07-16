//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LanguageModel {
    struct unique_ptr<language_modeling::LanguageModelImpl, std::default_delete<language_modeling::LanguageModelImpl>> m_impl;
};

struct LanguageModelImpl;

struct LanguageModelSession;

struct _NLConstraintParameters {
    _Bool splitSentences;
    unsigned long long minSplitTokens;
    unsigned long long maxSplitTokens;
    unsigned long long maxTokens;
    unsigned long long maxLabels;
    unsigned long long maxVocabularySize;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct unique_ptr<language_modeling::LanguageModelImpl, std::default_delete<language_modeling::LanguageModelImpl>> {
    struct __compressed_pair<language_modeling::LanguageModelImpl *, std::default_delete<language_modeling::LanguageModelImpl>> {
        struct LanguageModelImpl *__value_;
    } __ptr_;
};

struct unique_ptr<language_modeling::LanguageModelSession, std::default_delete<language_modeling::LanguageModelSession>> {
    struct __compressed_pair<language_modeling::LanguageModelSession *, std::default_delete<language_modeling::LanguageModelSession>> {
        struct LanguageModelSession *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct {
        long long _field1;
        long long _field2;
    } _field1;
    unsigned long long _field2;
} CDStruct_b1a60774;

