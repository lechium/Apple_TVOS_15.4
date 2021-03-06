//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString;

@interface MediaSocialPostOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSArray *_attachments;	// 104 = 0x68
    NSString *_authorID;	// 112 = 0x70
    NSString *_authorType;	// 120 = 0x78
    NSArray *_contentItems;	// 128 = 0x80
    double _createTime;	// 136 = 0x88
    NSArray *_externalServiceDestinations;	// 144 = 0x90
    _Bool _isAttributed;	// 152 = 0x98
    long long _postIdentifier;	// 160 = 0xa0
    CDUnknownBlockType _resultBlock;	// 168 = 0xa8
    NSString *_text;	// 176 = 0xb0
    NSString *_userAgent;	// 184 = 0xb8
    long long _postID;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000018ec0f
@property(nonatomic) long long postID; // @synthesize postID=_postID;
- (id)_targetDictionaryWithContentItem:(id)arg1;	// IMP=0x001000000018eb18
- (id)_requestBodyDictionary;	// IMP=0x001000000018e393
- (id)_externalServiceDictionaryWithDestination:(id)arg1;	// IMP=0x001000000018e1d0
- (id)_attachmentDictionaryWithAttachment:(id)arg1;	// IMP=0x001000000018dbc3
- (void)run;	// IMP=0x001000000018cde2
@property(copy) NSString *userAgent;
@property(copy) CDUnknownBlockType resultBlock;
- (id)initWithPostEntity:(id)arg1;	// IMP=0x001000000018c84e
- (id)initWithPostDescription:(id)arg1;	// IMP=0x001000000018c6c8

@end

