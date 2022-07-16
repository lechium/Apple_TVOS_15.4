//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/CNChangeHistoryEventVisitor-Protocol.h>

@class NSString, PPLocalContactStore, PPLocalNamedEntityStore, PPSQLDatabase;

@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor>
{
    PPSQLDatabase *_db;	// 8 = 0x8
    PPLocalContactStore *_contactStore;	// 16 = 0x10
    PPLocalNamedEntityStore *_namedEntityStore;	// 24 = 0x18
}

+ (id)defaultInstance;	// IMP=0x00000000000a89f2
- (void).cxx_destruct;	// IMP=0x00000000000a6ff8
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x00000000000a6ddd
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x00000000000a6452
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x00000000000a60ed
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x00000000000a5f78
- (void)importContactsDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a5906
- (id)init;	// IMP=0x00000000000a5900
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000000a5674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
