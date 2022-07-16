//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CNChangeHistoryEventVisitor-Protocol.h>

@class NSMutableArray, NSString;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>
{
    _Bool _didReset;	// 8 = 0x8
    _Bool _hasChanges;	// 9 = 0x9
    NSMutableArray *_insertedContacts;	// 16 = 0x10
    NSMutableArray *_updatedContacts;	// 24 = 0x18
    NSMutableArray *_deletedContactIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000034f95
@property(retain) NSMutableArray *deletedContactIdentifiers; // @synthesize deletedContactIdentifiers=_deletedContactIdentifiers;
@property(retain) NSMutableArray *updatedContacts; // @synthesize updatedContacts=_updatedContacts;
@property(retain) NSMutableArray *insertedContacts; // @synthesize insertedContacts=_insertedContacts;
@property _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property _Bool didReset; // @synthesize didReset=_didReset;
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x0000000000034e6f
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x0000000000034dda
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x0000000000034d45
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x0000000000034d3b
- (id)init;	// IMP=0x0000000000034caf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

