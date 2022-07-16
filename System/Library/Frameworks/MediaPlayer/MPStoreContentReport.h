//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying>
{
    NSString *_userID;	// 8 = 0x8
    NSString *_contentID;	// 16 = 0x10
    long long _concernItemType;	// 24 = 0x18
    NSString *_commentText;	// 32 = 0x20
    NSString *_aucType;	// 40 = 0x28
    NSString *_concernTypeID;	// 48 = 0x30
    NSString *_displayText;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000029d088
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) NSString *concernTypeID; // @synthesize concernTypeID=_concernTypeID;
@property(copy, nonatomic) NSString *aucType; // @synthesize aucType=_aucType;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(nonatomic) long long concernItemType; // @synthesize concernItemType=_concernItemType;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)description;	// IMP=0x000000000029cf15
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029cd49

@end

