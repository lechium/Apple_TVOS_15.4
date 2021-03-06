//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding>
{
    _Bool _refunded;	// 8 = 0x8
    NSData *_originStation;	// 16 = 0x10
    NSData *_destinationStation;	// 24 = 0x18
    NSNumber *_validityStartDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002695fe
- (void).cxx_destruct;	// IMP=0x000000000026984e
@property(readonly, nonatomic, getter=isRefunded) _Bool refunded; // @synthesize refunded=_refunded;
@property(readonly, copy, nonatomic) NSNumber *validityStartDate; // @synthesize validityStartDate=_validityStartDate;
@property(readonly, copy, nonatomic) NSData *destinationStation; // @synthesize destinationStation=_destinationStation;
@property(readonly, copy, nonatomic) NSData *originStation; // @synthesize originStation=_originStation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026978d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000269666
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000269614
- (id)init;	// IMP=0x0000000000269606

@end

