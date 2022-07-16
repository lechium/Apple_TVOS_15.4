//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSMutableString, NSString;

@interface IKXMLErrorHandlerContext : NSObject
{
    NSMutableString *_mutableErrorMessages;	// 8 = 0x8
    NSMutableSet *_mutableParserErrors;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006de20
@property(retain, nonatomic) NSMutableSet *mutableParserErrors; // @synthesize mutableParserErrors=_mutableParserErrors;
@property(retain, nonatomic) NSMutableString *mutableErrorMessages; // @synthesize mutableErrorMessages=_mutableErrorMessages;
- (void)clear;	// IMP=0x000000000006dd99
@property(readonly, nonatomic) NSArray *parserErrors;
@property(readonly, nonatomic) NSString *errorMessage;
- (id)init;	// IMP=0x000000000006dc8c

@end
