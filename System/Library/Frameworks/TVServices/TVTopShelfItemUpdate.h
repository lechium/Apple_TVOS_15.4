//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/NSSecureCoding-Protocol.h>

@class NSString, TVTopShelfAction;

@interface TVTopShelfItemUpdate : NSObject <NSSecureCoding>
{
    NSString *_itemIdentifier;	// 8 = 0x8
    TVTopShelfAction *_playAction;	// 16 = 0x10
    TVTopShelfAction *_displayAction;	// 24 = 0x18
    TVTopShelfAction *_addToLibraryAction;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004a8e9
+ (id)new;	// IMP=0x000000000004a430
- (void).cxx_destruct;	// IMP=0x000000000004a94c
@property(retain, nonatomic) TVTopShelfAction *addToLibraryAction; // @synthesize addToLibraryAction=_addToLibraryAction;
@property(retain, nonatomic) TVTopShelfAction *displayAction; // @synthesize displayAction=_displayAction;
@property(retain, nonatomic) TVTopShelfAction *playAction; // @synthesize playAction=_playAction;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a744
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004a5ae
- (id)description;	// IMP=0x000000000004a448
- (id)init;	// IMP=0x000000000004a405
- (id)initWithItemIdentifier:(id)arg1;	// IMP=0x000000000004a34b

@end
