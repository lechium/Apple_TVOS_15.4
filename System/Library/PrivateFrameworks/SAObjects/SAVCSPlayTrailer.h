//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer
{
}

+ (id)playTrailerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003a374
+ (id)playTrailer;	// IMP=0x000000000003a362
@property(copy, nonatomic) NSString *utsId;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSURL *lowresTrailerUri;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSURL *hiresTrailerUri;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;	// IMP=0x000000000003a355
- (id)groupIdentifier;	// IMP=0x000000000003a341

@end

