//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKVideoAsset : NSObject
{
    NSString *_URL;	// 8 = 0x8
    NSString *_programID;	// 16 = 0x10
    NSString *_assetID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000025483
@property(readonly, copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(readonly, copy, nonatomic) NSString *programID; // @synthesize programID=_programID;
@property(readonly, copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000025386

@end
