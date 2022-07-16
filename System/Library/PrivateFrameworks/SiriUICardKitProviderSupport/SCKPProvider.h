//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriUICardKitProviderSupport/CRKIdentifiedProviding-Protocol.h>

@class NSString;

@interface SCKPProvider : NSObject <CRKIdentifiedProviding>
{
}

@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000023aa
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000022d3
- (id)init;	// IMP=0x000000000000225f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

