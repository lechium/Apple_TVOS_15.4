//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>
#import <ActionKit/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL, UIImage;

@interface CLWebItem : NSObject <NSCopying, NSCoding>
{
    NSString *_name;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSURL *_contentURL;	// 24 = 0x18
    NSString *_mimeType;	// 32 = 0x20
    long long _viewCount;	// 40 = 0x28
    NSURL *_remoteURL;	// 48 = 0x30
    NSURL *_href;	// 56 = 0x38
    NSURL *_URL;	// 64 = 0x40
    NSURL *_iconURL;	// 72 = 0x48
    UIImage *_icon;	// 80 = 0x50
    _Bool _trashed;	// 88 = 0x58
    _Bool _private;	// 89 = 0x59
    NSDate *_createdAt;	// 96 = 0x60
    NSDate *_updatedAt;	// 104 = 0x68
    NSDate *_deletedAt;	// 112 = 0x70
}

+ (id)webItemWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3;	// IMP=0x00000000001a1dbc
+ (id)webItemWithName:(id)arg1;	// IMP=0x00000000001a1d85
+ (id)webItem;	// IMP=0x00000000001a1d6b
@property(retain, nonatomic) NSDate *deletedAt; // @synthesize deletedAt=_deletedAt;
@property(retain, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic, getter=isPrivate) _Bool private; // @synthesize private=_private;
@property(nonatomic, getter=isTrashed) _Bool trashed; // @synthesize trashed=_trashed;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSURL *href; // @synthesize href=_href;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x00000000001a1b50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a1909
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a1700
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a157b
- (id)description;	// IMP=0x00000000001a14e5
- (id)initWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3;	// IMP=0x00000000001a1478
- (id)initWithName:(id)arg1;	// IMP=0x00000000001a145e
- (id)init;	// IMP=0x00000000001a144a

@end
