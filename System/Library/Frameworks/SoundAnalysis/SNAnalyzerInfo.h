//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, SNAnalyzerHost;
@protocol SNAnalyzerCreating, SNProcessing;

__attribute__((visibility("hidden")))
@interface SNAnalyzerInfo : NSObject
{
    _Bool _configured;	// 8 = 0x8
    id <SNAnalyzerCreating> _request;	// 16 = 0x10
    CDUnknownBlockType _resultsHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    SNAnalyzerHost *_analyzerHost;	// 40 = 0x28
    id <SNProcessing> _sharedProcessor;	// 48 = 0x30
    NSError *_configurationError;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000033ef0
@property(retain, nonatomic) NSError *configurationError; // @synthesize configurationError=_configurationError;
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(retain, nonatomic) id <SNProcessing> sharedProcessor; // @synthesize sharedProcessor=_sharedProcessor;
@property(retain, nonatomic) SNAnalyzerHost *analyzerHost; // @synthesize analyzerHost=_analyzerHost;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property(retain, nonatomic) id <SNAnalyzerCreating> request; // @synthesize request=_request;

@end

