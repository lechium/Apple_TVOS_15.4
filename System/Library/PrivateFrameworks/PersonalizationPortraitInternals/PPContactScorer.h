//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPContactScorer : NSObject
{
}

+ (void)scoreContactNameRecords:(id)arg1;	// IMP=0x0000000000100d7f
+ (id)scoredContactsWithContacts:(id)arg1;	// IMP=0x0000000000100bcc
+ (id)mostRelevantContactsWithName:(id)arg1 store:(id)arg2;	// IMP=0x00000000001009a8
+ (id)mostRelevantContactsWithStore:(id)arg1 shouldContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000010064c
+ (id)mostRelevantContactsWithStore:(id)arg1;	// IMP=0x0000000000100633

@end

