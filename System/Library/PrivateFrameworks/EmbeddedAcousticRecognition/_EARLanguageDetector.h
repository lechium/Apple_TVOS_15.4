//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLanguageDetector : NSObject
{
    struct unique_ptr<quasar::LanguageDetector, std::default_delete<quasar::LanguageDetector>> languageDetector;	// 8 = 0x8
    unsigned int _featureQueuePriority;	// 16 = 0x10
}

+ (shared_ptr_9fadee34)updateContext:(const void *)arg1 withMessageLocales:(const void *)arg2;	// IMP=0x00000000006edbfc
+ (vector_442db92a)quasarLocalesOfMessages:(id)arg1;	// IMP=0x00000000006ed3cb
+ (id)localesOfMessages:(id)arg1;	// IMP=0x00000000006ed179
+ (void)initialize;	// IMP=0x00000000006ecd70
- (id).cxx_construct;	// IMP=0x00000000006ee8f8
- (void).cxx_destruct;	// IMP=0x00000000006ee8e8
@property(nonatomic) unsigned int featureQueuePriority; // @synthesize featureQueuePriority=_featureQueuePriority;
- (id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000006ede23
- (id)initWithConfigFile:(id)arg1 overrides:(id)arg2;	// IMP=0x00000000006ecddd
- (id)initWithConfigFile:(id)arg1;	// IMP=0x00000000006ecdc3

@end

