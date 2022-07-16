//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INBusTrip, INSeat;

@interface INBusReservation <NSCopying, NSSecureCoding>
{
    INSeat *_reservedSeat;	// 8 = 0x8
    INBusTrip *_busTrip;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004aa756
- (void).cxx_destruct;	// IMP=0x00000000004aa725
@property(readonly, copy, nonatomic) INBusTrip *busTrip; // @synthesize busTrip=_busTrip;
@property(readonly, copy, nonatomic) INSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
- (id)_dictionaryRepresentation;	// IMP=0x00000000004aa579
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004aa4da
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004aa3eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004aa3e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004aa2f5
- (unsigned long long)hash;	// IMP=0x00000000004aa27c
- (id)_duration;	// IMP=0x00000000004aa25f
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9;	// IMP=0x00000000004aa16a
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 url:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9;	// IMP=0x00000000004aa158

@end

