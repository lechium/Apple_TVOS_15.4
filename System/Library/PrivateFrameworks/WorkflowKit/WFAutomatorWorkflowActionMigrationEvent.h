//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFAutomatorWorkflowActionMigrationEvent
{
    _Bool _completed;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_automatorActionIdentifier;	// 24 = 0x18
}

+ (Class)codableEventClass;	// IMP=0x000000000009db98
- (void).cxx_destruct;	// IMP=0x000000000009dc0d
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSString *automatorActionIdentifier; // @synthesize automatorActionIdentifier=_automatorActionIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

