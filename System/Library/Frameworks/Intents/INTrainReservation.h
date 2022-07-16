//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSeat, INTrainTrip;

@interface INTrainReservation <NSCopying, NSSecureCoding>
{
    INSeat *_reservedSeat;	// 8 = 0x8
    INTrainTrip *_trainTrip;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003dc09d
- (void).cxx_destruct;	// IMP=0x00000000003dc06c
@property(readonly, copy, nonatomic) INTrainTrip *trainTrip; // @synthesize trainTrip=_trainTrip;
@property(readonly, copy, nonatomic) INSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
- (id)_dictionaryRepresentation;	// IMP=0x00000000003dbec7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003dbde7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003dbcba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003dbcaf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003dbbc4
- (unsigned long long)hash;	// IMP=0x00000000003dbb4b
- (id)_duration;	// IMP=0x00000000003dbb2e
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 trainTrip:(id)arg8;	// IMP=0x00000000003dbaf9
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 trainTrip:(id)arg9;	// IMP=0x00000000003dba04

@end

