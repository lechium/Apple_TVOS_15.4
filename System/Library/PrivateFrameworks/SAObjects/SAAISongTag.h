//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag
{
}

+ (id)songTagWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001aae2
+ (id)songTag;	// IMP=0x000000000001aad0
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSURL *radioStationUri;
@property(retain, nonatomic) SAUIImageResource *previewImage;
@property(copy, nonatomic) NSURL *iTunesUri;
@property(copy, nonatomic) NSString *contentRating;
@property(copy, nonatomic) NSString *artistAdamId;
@property(copy, nonatomic) NSString *artist;
@property(copy, nonatomic) NSString *albumAdamId;
@property(copy, nonatomic) NSString *album;
@property(copy, nonatomic) NSString *adamId;
- (id)encodedClassName;	// IMP=0x000000000001aac3
- (id)groupIdentifier;	// IMP=0x000000000001aaaf

@end

