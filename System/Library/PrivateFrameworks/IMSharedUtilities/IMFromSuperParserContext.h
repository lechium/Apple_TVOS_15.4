//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface IMFromSuperParserContext
{
    NSMutableArray *_inlinedFileTransferGUIDs;	// 16 = 0x10
    NSMutableArray *_standaloneFileTransferGUIDs;	// 24 = 0x18
    _Bool _foundBreadcrumbText;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool foundBreadcrumbText; // @synthesize foundBreadcrumbText=_foundBreadcrumbText;
@property(readonly, retain, nonatomic) NSArray *standaloneFileTransferGUIDs; // @synthesize standaloneFileTransferGUIDs=_standaloneFileTransferGUIDs;
@property(readonly, retain, nonatomic) NSArray *inlinedFileTransferGUIDs; // @synthesize inlinedFileTransferGUIDs=_inlinedFileTransferGUIDs;
- (void)parser:(id)arg1 foundBreadcrumbText:(id)arg2 withOptions:(unsigned int)arg3;	// IMP=0x0000000000010e7a
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9;	// IMP=0x0000000000010e74
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8;	// IMP=0x0000000000010e36
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3 characters:(id)arg4;	// IMP=0x0000000000010e30
- (void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2;	// IMP=0x0000000000010e2a
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x0000000000010b94
- (void)parserDidStart:(id)arg1;	// IMP=0x0000000000010a36
- (id)resultsForLogging;	// IMP=0x0000000000010a0a
- (id)name;	// IMP=0x00000000000109fd
- (void)dealloc;	// IMP=0x00000000000109a5
- (id)initWithAttributedString:(id)arg1;	// IMP=0x0000000000010930

@end
