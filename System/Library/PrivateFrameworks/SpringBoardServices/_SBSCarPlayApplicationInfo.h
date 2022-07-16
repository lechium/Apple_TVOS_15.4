//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSCarPlayApplicationIcon-Protocol.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon>
{
    NSData *_iconImageData;	// 8 = 0x8
    double _iconImageScale;	// 16 = 0x10
    NSString *_localizedDisplayName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000011f47
@property(retain, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(nonatomic) double iconImageScale; // @synthesize iconImageScale=_iconImageScale;
@property(retain, nonatomic) NSData *iconImageData; // @synthesize iconImageData=_iconImageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

