//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <ParsecModel/NSFetchRequestResult-Protocol.h>

@class NSDate;

@interface PARSessionEngagementsByTrigger : NSManagedObject <NSFetchRequestResult>
{
}

- (void).cxx_destruct;	// IMP=0x0000000000002057
- (void).cxx_construct;	// IMP=0x000000000000204e
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000002002

// Remaining properties
@property(nonatomic) short client; // @dynamic client;
@property(nonatomic) short go; // @dynamic go;
@property(nonatomic) _Bool isSuggestion; // @dynamic isSuggestion;
@property(nonatomic) _Bool isTopHit; // @dynamic isTopHit;
@property(nonatomic) short tap; // @dynamic tap;
@property(nonatomic, copy) NSDate *timestamp; // @dynamic timestamp;

@end

