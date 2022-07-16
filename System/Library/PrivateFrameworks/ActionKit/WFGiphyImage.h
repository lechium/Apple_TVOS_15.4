//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, WFImage;

@interface WFGiphyImage : MTLModel <NSSecureCoding, MTLJSONSerializing>
{
    NSURL *_url;	// 8 = 0x8
    NSURL *_videoURL;	// 16 = 0x10
    unsigned long long _fileSize;	// 24 = 0x18
    unsigned long long _width;	// 32 = 0x20
    unsigned long long _height;	// 40 = 0x28
    WFImage *_cachedImage;	// 48 = 0x30
}

+ (id)JSONTransformerForKey:(id)arg1;	// IMP=0x000000000022e677
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x000000000022e5e3
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000022e5db
- (void).cxx_destruct;	// IMP=0x000000000022e599
@property(retain, nonatomic) WFImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
