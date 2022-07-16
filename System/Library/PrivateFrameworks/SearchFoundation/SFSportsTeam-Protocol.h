//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage;

@protocol SFSportsTeam <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *accessibilityDescription;
@property(copy, nonatomic) NSString *score;
@property(copy, nonatomic) NSString *record;
@property(retain, nonatomic) SFImage *logo;
@end

