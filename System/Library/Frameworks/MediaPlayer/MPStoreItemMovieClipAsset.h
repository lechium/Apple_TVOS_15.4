//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreItemMovieClipAsset : NSObject
{
    NSDictionary *_lookupDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000216357
@property(readonly, copy, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
@property(readonly, copy, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSURL *hlsURL;
@property(readonly, copy, nonatomic) NSString *flavor;
@property(readonly, nonatomic) double duration;
- (id)initWithLookupDictionary:(id)arg1;	// IMP=0x0000000000216144

@end

