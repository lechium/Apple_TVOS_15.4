//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBLocation, _INPBString;

@protocol _INPBRetrieveParkingLocationIntentResponse <NSObject>
@property(readonly, nonatomic) _Bool hasParkingNote;
@property(retain, nonatomic) _INPBString *parkingNote;
@property(readonly, nonatomic) _Bool hasParkingLocation;
@property(retain, nonatomic) _INPBLocation *parkingLocation;
@end

