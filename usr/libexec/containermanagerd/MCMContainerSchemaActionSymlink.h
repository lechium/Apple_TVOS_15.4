//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface MCMContainerSchemaActionSymlink
{
    NSURL *_linkURL;	// 8 = 0x8
    NSString *_targetPath;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x002000000007070b
- (void).cxx_destruct;	// IMP=0x002000000007042c
- (_Bool)performWithError:(id *)arg1;	// IMP=0x001000000007005b
- (id)description;	// IMP=0x001000000006ffb7
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;	// IMP=0x001000000006febd

@end

