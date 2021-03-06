//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x00200000000a3795
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x00100000000a3581
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x00100000000a3536
- (void)run;	// IMP=0x00100000000a304e
@property(readonly) NSString *promptIdentifier;
- (void);	// IMP=0x00100000000a2fee
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x00100000000a2f90
- (id)init;	// IMP=0x00100000000a2f7c

@end

