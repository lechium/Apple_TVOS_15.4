//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBGetReservationDetailsIntent <NSObject>
+ (Class)reservationItemReferencesType;
@property(readonly, nonatomic) unsigned long long reservationItemReferencesCount;
@property(copy, nonatomic) NSArray *reservationItemReferences;
@property(readonly, nonatomic) _Bool hasReservationContainerReference;
@property(retain, nonatomic) _INPBDataString *reservationContainerReference;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (_INPBDataString *)reservationItemReferencesAtIndex:(unsigned long long)arg1;
- (void)addReservationItemReferences:(_INPBDataString *)arg1;
- (void)clearReservationItemReferences;
@end

