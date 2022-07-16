//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFAccessoryRepresentableObjectFiltering-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>

@class NSString;

@interface HFAccessoryType : NSObject <HFAccessoryRepresentableObjectFiltering, NAIdentifiable>
{
}

+ (id)na_identity;	// IMP=0x000000000004d566
+ (id)mediaSystemType;	// IMP=0x000000000004d41f
+ (id)serviceTypeWithService:(id)arg1;	// IMP=0x000000000004d347
+ (id)serviceType:(id)arg1 subtype:(id)arg2;	// IMP=0x000000000004d091
+ (id)serviceType:(id)arg1;	// IMP=0x000000000004d07d
+ (id)categoryTypeWithCategory:(id)arg1;	// IMP=0x000000000004d01b
+ (id)categoryType:(id)arg1;	// IMP=0x000000000004ce3a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004d4f0
@property(readonly) unsigned long long hash;
- (id)_init;	// IMP=0x000000000004ce0b
- (id)filterAccessoryRepresentableObjects:(id)arg1;	// IMP=0x0000000000072b28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
