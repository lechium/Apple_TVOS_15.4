//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct EntityCandidate;

struct MatchingSpan;

struct NLv4EmbeddingTensor;

struct NLv4ParserRequest;

struct Reader {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    _Bool _field4;
};

struct TokenChain;

struct UsoGraph;

struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> {
    struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> {
        struct UsoGraph *_field1;
    } _field1;
};

struct unique_ptr<sirinluexternal::EntityCandidate, std::default_delete<sirinluexternal::EntityCandidate>> {
    struct __compressed_pair<sirinluexternal::EntityCandidate *, std::default_delete<sirinluexternal::EntityCandidate>> {
        struct EntityCandidate *_field1;
    } _field1;
};

struct unique_ptr<sirinluexternal::UsoGraph, std::default_delete<sirinluexternal::UsoGraph>> {
    struct __compressed_pair<sirinluexternal::UsoGraph *, std::default_delete<sirinluexternal::UsoGraph>> {
        struct UsoGraph *_field1;
    } _field1;
};

struct unique_ptr<sirinluinternal::MatchingSpan, std::default_delete<sirinluinternal::MatchingSpan>> {
    struct __compressed_pair<sirinluinternal::MatchingSpan *, std::default_delete<sirinluinternal::MatchingSpan>> {
        struct MatchingSpan *_field1;
    } _field1;
};

struct unique_ptr<sirinluinternal::NLv4EmbeddingTensor, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> {
    struct __compressed_pair<sirinluinternal::NLv4EmbeddingTensor *, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> {
        struct NLv4EmbeddingTensor *_field1;
    } _field1;
};

struct unique_ptr<sirinluinternal::TokenChain, std::default_delete<sirinluinternal::TokenChain>> {
    struct __compressed_pair<sirinluinternal::TokenChain *, std::default_delete<sirinluinternal::TokenChain>> {
        struct TokenChain *_field1;
    } _field1;
};

struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> {
    struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> {
        struct NLv4ParserRequest *_field1;
    } _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

typedef struct {
    int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_95bda58d;

// Ambiguous groups
typedef struct {
    unsigned int asrConfidence:1;
    unsigned int endIndex:1;
    unsigned int startIndex:1;
    unsigned int removeSpaceAfter:1;
} CDStruct_c1a2f969;

typedef struct {
    unsigned int embeddingDim:1;
    unsigned int numLayer:1;
    unsigned int numToken:1;
} CDStruct_31a0d69e;

typedef struct {
    unsigned int confidence:1;
    unsigned int rewriteType:1;
} CDStruct_968924a9;

typedef struct {
    unsigned int startTimestamp:1;
    unsigned int tap2edit:1;
} CDStruct_0e452375;

typedef struct {
    unsigned int confidence:1;
} CDStruct_81d693a7;

typedef struct {
    unsigned int maxNumParses:1;
} CDStruct_a4c5e30d;

typedef struct {
    unsigned int score:1;
} CDStruct_4b1634df;

typedef struct {
    unsigned int type:1;
} CDStruct_f953fb60;

typedef struct {
    unsigned int value:1;
} CDStruct_01ef6375;

typedef struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> {
    struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> {
        struct UsoGraph *_field1;
    } _field1;
} unique_ptr_8a7cebb7;

typedef struct unique_ptr<sirinluexternal::EntityCandidate, std::default_delete<sirinluexternal::EntityCandidate>> {
    struct __compressed_pair<sirinluexternal::EntityCandidate *, std::default_delete<sirinluexternal::EntityCandidate>> {
        struct EntityCandidate *_field1;
    } _field1;
} unique_ptr_f9c9e503;

typedef struct unique_ptr<sirinluexternal::UsoGraph, std::default_delete<sirinluexternal::UsoGraph>> {
    struct __compressed_pair<sirinluexternal::UsoGraph *, std::default_delete<sirinluexternal::UsoGraph>> {
        struct UsoGraph *_field1;
    } _field1;
} unique_ptr_8df694ec;

typedef struct unique_ptr<sirinluinternal::MatchingSpan, std::default_delete<sirinluinternal::MatchingSpan>> {
    struct __compressed_pair<sirinluinternal::MatchingSpan *, std::default_delete<sirinluinternal::MatchingSpan>> {
        struct MatchingSpan *_field1;
    } _field1;
} unique_ptr_bb22c476;

typedef struct unique_ptr<sirinluinternal::NLv4EmbeddingTensor, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> {
    struct __compressed_pair<sirinluinternal::NLv4EmbeddingTensor *, std::default_delete<sirinluinternal::NLv4EmbeddingTensor>> {
        struct NLv4EmbeddingTensor *_field1;
    } _field1;
} unique_ptr_0c8e3933;

typedef struct unique_ptr<sirinluinternal::TokenChain, std::default_delete<sirinluinternal::TokenChain>> {
    struct __compressed_pair<sirinluinternal::TokenChain *, std::default_delete<sirinluinternal::TokenChain>> {
        struct TokenChain *_field1;
    } _field1;
} unique_ptr_c7951cb7;

typedef struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> {
    struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> {
        struct NLv4ParserRequest *_field1;
    } _field1;
} unique_ptr_7e96dec3;

