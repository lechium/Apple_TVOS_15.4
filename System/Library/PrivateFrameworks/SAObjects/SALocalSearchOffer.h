//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAUIAppPunchOut;

@interface SALocalSearchOffer <SAAceSerializable>
{
}

+ (id)offerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000290df
+ (id)offer;	// IMP=0x00000000000290cd
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIAppPunchOut *offerPunchOut;
@property(copy, nonatomic) NSString *identifier;
- (id)encodedClassName;	// IMP=0x00000000000290c0
- (id)groupIdentifier;	// IMP=0x00000000000290ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

