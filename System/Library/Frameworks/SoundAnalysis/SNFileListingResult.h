//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNResult-Protocol.h>

@class NSArray, NSString;

@interface SNFileListingResult : NSObject <SNResult>
{
    NSArray *_fileItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000202a3
@property(retain, nonatomic) NSArray *fileItems; // @synthesize fileItems=_fileItems;
- (id)initWithFileItems:(id)arg1;	// IMP=0x0000000000020220

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

