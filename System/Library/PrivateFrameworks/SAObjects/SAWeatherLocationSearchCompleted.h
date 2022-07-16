//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAWeatherLocationSearchCompleted <SAServerBoundCommand>
{
}

+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;	// IMP=0x0000000000019b0c
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000019b02
+ (id)locationSearchCompleted;	// IMP=0x0000000000019af0
- (_Bool)requiresResponse;	// IMP=0x0000000000019be9
@property(copy, nonatomic) NSArray *weatherLocations;
- (id)initWithWeatherLocations:(id)arg1;	// IMP=0x0000000000019b59
- (id)encodedClassName;	// IMP=0x0000000000019ae3
- (id)groupIdentifier;	// IMP=0x0000000000019acf

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

