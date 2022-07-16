//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Focus/FCActivityLifetimeDescribing-Protocol.h>

@class DNDLifetimeDetails, NSString;

@interface _FCActivityLifetime : NSObject <FCActivityLifetimeDescribing>
{
    DNDLifetimeDetails *_dndLifetimeDetails;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007710
@property(readonly, copy, nonatomic, getter=_dndLifetimeDetails) DNDLifetimeDetails *dndLifetimeDetails; // @synthesize dndLifetimeDetails=_dndLifetimeDetails;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000076a7
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007577
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *lifetimeMetadata;
@property(readonly, copy, nonatomic) NSString *lifetimeName;
@property(readonly, copy, nonatomic) NSString *lifetimeIdentifier;
- (id)initWithLifetimeDetails:(id)arg1;	// IMP=0x00000000000074b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

