//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding>
{
    NSNumber *_processId;	// 8 = 0x8
    NSArray *_contextIds;	// 16 = 0x10
    NSDictionary *_layerNamesByContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001f506
@property(copy, nonatomic) NSDictionary *layerNamesByContext; // @synthesize layerNamesByContext=_layerNamesByContext;
@property(copy, nonatomic) NSArray *contextIds; // @synthesize contextIds=_contextIds;
@property(retain, nonatomic) NSNumber *processId; // @synthesize processId=_processId;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001f443
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001f3f3
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001f35c
- (id)succinctDescription;	// IMP=0x000000000001f30c
@property(readonly, copy) NSString *description;
- (id)initWithProcessId:(id)arg1 contextIds:(id)arg2;	// IMP=0x000000000001f24d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

