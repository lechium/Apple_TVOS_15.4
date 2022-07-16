//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SAVCSPlayContent
{
}

+ (id)playContentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000337c5
+ (id)playContent;	// IMP=0x00000000000337b3
- (_Bool)requiresResponse;	// IMP=0x0000000000033879
@property(copy, nonatomic) NSString *utsId;
@property(nonatomic) _Bool playTrailer;
@property(copy, nonatomic) NSURL *lowresTrailerUri;
@property(copy, nonatomic) NSURL *hiresTrailerUri;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;	// IMP=0x00000000000337a6
- (id)groupIdentifier;	// IMP=0x0000000000033792

@end
