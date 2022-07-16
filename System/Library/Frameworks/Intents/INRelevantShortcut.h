//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INDefaultCardTemplate, INShortcut, NSArray, NSString;

@interface INRelevantShortcut : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_relevanceProviders;	// 8 = 0x8
    INDefaultCardTemplate *_watchTemplate;	// 16 = 0x10
    NSString *_widgetKind;	// 24 = 0x18
    long long _shortcutRole;	// 32 = 0x20
    INShortcut *_shortcut;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028b138
- (void).cxx_destruct;	// IMP=0x000000000028b0fa
@property(copy, nonatomic) INShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(nonatomic) long long shortcutRole; // @synthesize shortcutRole=_shortcutRole;
@property(copy, nonatomic) NSString *widgetKind; // @synthesize widgetKind=_widgetKind;
@property(copy, nonatomic) INDefaultCardTemplate *watchTemplate; // @synthesize watchTemplate=_watchTemplate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028afee
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028ae37
@property(copy, nonatomic) NSArray *relevanceProviders; // @synthesize relevanceProviders=_relevanceProviders;
- (id)initWithShortcut:(id)arg1;	// IMP=0x000000000028a9af
- (id)init;	// IMP=0x000000000028a92e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028a800

@end

