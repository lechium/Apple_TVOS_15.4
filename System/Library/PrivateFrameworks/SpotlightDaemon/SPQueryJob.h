//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SPQueryResultsQueue;

@interface SPQueryJob : NSObject
{
    struct __SIJobRef *_siJob;	// 8 = 0x8
    NSString *_dataclass;	// 16 = 0x10
    SPQueryResultsQueue *_resultsQueue;	// 24 = 0x18
    CDUnknownBlockType _resultsHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000018f6
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(nonatomic) __weak SPQueryResultsQueue *resultsQueue; // @synthesize resultsQueue=_resultsQueue;
@property(retain, nonatomic) NSString *dataclass; // @synthesize dataclass=_dataclass;
@property(nonatomic) struct __SIJobRef *siJob; // @synthesize siJob=_siJob;
- (void)cancel;	// IMP=0x0000000000001851
- (void)dealloc;	// IMP=0x0000000000001808
- (id)initWithSIJob:(struct __SIJobRef *)arg1 dataclass:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000175c

@end
