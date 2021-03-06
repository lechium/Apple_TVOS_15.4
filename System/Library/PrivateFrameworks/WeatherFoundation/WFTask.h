//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, WFTaskIdentifier;

@interface WFTask : NSObject
{
    _Bool _requiresResponse;	// 8 = 0x8
    WFTaskIdentifier *_identifier;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
}

+ (id)sharedServiceConnection;	// IMP=0x000000000004e75f
- (void).cxx_destruct;	// IMP=0x000000000004eb80
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool requiresResponse; // @synthesize requiresResponse=_requiresResponse;
@property(readonly, nonatomic) WFTaskIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)cancel;	// IMP=0x000000000004eaf9
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cleanup;	// IMP=0x000000000004eaaf
- (void)handleCancellation;	// IMP=0x000000000004ea9d
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;	// IMP=0x000000000004ea8b
- (void)handleResponse:(id)arg1;	// IMP=0x000000000004ea79
- (void)startWithService:(id)arg1;	// IMP=0x000000000004ea73
- (void)executeSynchronously;	// IMP=0x000000000004ea1a
- (void)start;	// IMP=0x000000000004e9c6
- (id)initWithResponseRequired:(_Bool)arg1;	// IMP=0x000000000004e9a2
- (id)init;	// IMP=0x000000000004e7b4

@end

