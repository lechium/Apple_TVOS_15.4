//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface RingtonePurchase : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;	// IMP=0x0040000000067931
- (void)_assignToContact:(id)arg1 inContactStore:(id)arg2 withSoundIdentifier:(id)arg3;	// IMP=0x0020000000067d23
- (void)_assignToPersonWithID:(int)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000067caf
- (void)_assignToContactWithID:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000067bbf
- (void)loadFromPurchase:(id)arg1;	// IMP=0x0010000000067aaf
- (void)applyUserActionWithToneIdentifier:(id)arg1;	// IMP=0x001000000006797e

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *assignToContactID; // @dynamic assignToContactID;
@property(retain, nonatomic) NSNumber *assignToPersonID; // @dynamic assignToPersonID;
@property(retain, nonatomic) NSString *assigneeToneStyle; // @dynamic assigneeToneStyle;
@property(retain, nonatomic) NSNumber *shouldMakeDefault; // @dynamic shouldMakeDefault;
@property(retain, nonatomic) NSNumber *shouldMakeDefaultTextTone; // @dynamic shouldMakeDefaultTextTone;
@property(retain, nonatomic) NSString *transactionID; // @dynamic transactionID;

@end

