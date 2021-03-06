//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding>
{
    NSArray *_trains;	// 8 = 0x8
    NSNumber *_validityStartDate;	// 16 = 0x10
    NSNumber *_validityTerm;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000268f5e
- (void).cxx_destruct;	// IMP=0x00000000002691ba
@property(readonly, copy, nonatomic) NSNumber *validityTerm; // @synthesize validityTerm=_validityTerm;
@property(readonly, copy, nonatomic) NSNumber *validityStartDate; // @synthesize validityStartDate=_validityStartDate;
@property(readonly, copy, nonatomic) NSArray *trains; // @synthesize trains=_trains;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000269119
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000268fc6
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000268f74
- (id)init;	// IMP=0x0000000000268f66

@end

