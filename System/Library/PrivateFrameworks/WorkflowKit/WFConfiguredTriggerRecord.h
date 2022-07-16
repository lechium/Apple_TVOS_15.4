//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface WFConfiguredTriggerRecord
{
    _Bool _shouldPrompt;	// 8 = 0x8
    _Bool _shouldNotify;	// 9 = 0x9
    _Bool _enabled;	// 10 = 0xa
    int _source;	// 12 = 0xc
    int _notificationLevel;	// 16 = 0x10
    NSData *_triggerData;	// 24 = 0x18
    NSData *_suggestionData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000246425
@property(nonatomic) int notificationLevel; // @synthesize notificationLevel=_notificationLevel;
@property(copy, nonatomic) NSData *suggestionData; // @synthesize suggestionData=_suggestionData;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(nonatomic) _Bool shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(copy, nonatomic) NSData *triggerData; // @synthesize triggerData=_triggerData;

@end

