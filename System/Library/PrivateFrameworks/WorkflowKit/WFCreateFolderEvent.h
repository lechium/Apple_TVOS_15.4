//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFCreateFolderEvent
{
    unsigned int _icon;	// 8 = 0x8
    unsigned int _shortcutCount;	// 12 = 0xc
    NSString *_key;	// 16 = 0x10
    NSString *_folderSource;	// 24 = 0x18
}

+ (Class)codableEventClass;	// IMP=0x000000000002aa96
- (void).cxx_destruct;	// IMP=0x000000000002ab2b
@property(nonatomic) unsigned int shortcutCount; // @synthesize shortcutCount=_shortcutCount;
@property(nonatomic) unsigned int icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *folderSource; // @synthesize folderSource=_folderSource;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end
