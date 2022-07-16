//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SignpostSupport/SignpostCARenderServerFrameMetadata-Protocol.h>

@class SignpostContextInfo, SignpostFrameLifetimeInterval;
@protocol SignpostSupportTimeInterval;

@interface SignpostContextFrameLifetime <SignpostCARenderServerFrameMetadata>
{
    SignpostFrameLifetimeInterval *_parentFrameLifetime;	// 32 = 0x20
    SignpostContextInfo *_contextInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000024972
@property(readonly, nonatomic) SignpostContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(readonly, nonatomic) SignpostFrameLifetimeInterval *parentFrameLifetime; // @synthesize parentFrameLifetime=_parentFrameLifetime;
@property(readonly, nonatomic) id <SignpostSupportTimeInterval> contextGlitchInterval;
@property(readonly, nonatomic) unsigned int frameSeed;
- (id)initWithFrameLifetime:(id)arg1 contextInfo:(id)arg2;	// IMP=0x0000000000024709

@end

