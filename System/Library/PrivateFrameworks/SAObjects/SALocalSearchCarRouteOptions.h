//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SALocalSearchCarRouteOptions <SAAceSerializable>
{
}

+ (id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001ee3b
+ (id)carRouteOptions;	// IMP=0x000000000001ee29
@property(nonatomic) _Bool avoidTolls;
@property(nonatomic) _Bool avoidHighways;
- (id)encodedClassName;	// IMP=0x000000000001ee1c
- (id)groupIdentifier;	// IMP=0x000000000001ee08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

